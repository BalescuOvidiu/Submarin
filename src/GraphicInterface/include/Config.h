/**
 *  Config.h
 * 
 *  Created 28 May 2018
 *  By Balescu Ovidiu-Gheorghe
 *  Modified 25 February 2020
 *  By Balescu Ovidiu-Gheorghe
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/** Other headers. */
#include <cstdlib>

/** Time. */
#include <ctime>

/** STL objects. */
#include <stack>
#include <string>

/** SFML. */
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>

/** Mathematical constants and functions. */
#include "mathematics.h"                   

#define MOUSE_TIMEOUT 320
#define KEY_TIMEOUT    20

/**
 * This namespace contains data of screen, grid, font, position
 * of view and zoom information. It's functions modularize work
 * with mouse, positioning and text.
 *
 * File configuration.txt must contain on each line:
 * 1. name of application,
 * 2. timeFormat string to format time for log file,
 * 3. frame rate of window,
 * 4. move view speed of view(camera),
 * 5. circle precision, numbers of lines of polygon who make the circle,
 * 6. decimals number printed on screen.
 */
namespace config {

	/** Precision. */
	void exit ();
	bool canExit ();
	double getMoveViewSpeed ();
	double getCirclePrecision ();
	unsigned getDecimalsNumber ();

	/** Communications. */
	bool writeConfigFile ();
	std::string getNameOfApplication ();

	void initialize ();
	void logMessage (std::string message);
	void move (sf::Vector2f position);

	/** Functions used to create text label. */

	/** Functions used for mouse click. */
	bool canClick (short time);
	bool canLeft (short time);
	bool canRight (short time);
	void restartClick ();

	/** Functions used to get mouse coordinate. */
	sf::Vector2f mousePositionOnGrid ();
	sf::Vector2f mousePosition ();
	sf::Vector2f mouseZoomed ();

	/** Points functions */
	void move (double x, double y);
	sf::Vector2f centerOfScreen ();
	sf::Vector2f zoomPoint (sf::Vector2f point);

	/** 
	 * Functions used for conversion between bidimensional 
	 * vectors and grid values.
	 */
	sf::Vector2f toGrid (sf::Vector2f vector);
	sf::Vector2f fromGrid (sf::Vector2f vector);

	/**
	 * This function transform numbers and objects into a string,
	 * with measure units.
	 *
	 * @param object, number,
	 * @param measure unit.
	 * 
	 * @return string.
	 */
	template <typename T>
	sf::String format (const T& object, sf::String measureUnit) {
		return sf::String (format (object)) + measureUnit;
	}

	/**
	 * This function transform numbers and objects into a string.
	 *
	 * @param object.
	 * 
	 * @return string.
	 */
	template <typename T>
	std::string toString(const T& object) {
	    std::ostringstream stream;
	    stream << object;
	    return stream.str();
	}

	/**
	 * This function scale a number to grid values.
	 *
	 * @param a value of number scaled to grid values.
	 * 
	 * @return scaled value to grids.
	 */
	template <class T>
	T toGrid (T a) {
		return a * getGrid ();
	}

	/**
	 * This function scale a point to grid values.
	 *
	 * @param x first coordinate of point;
	 * @param y second coordinate of point.
	 */
	template <class T>
	void toGrid (T& x, T& y) {
		x *=  config::getGrid ();
		y *=  config::getGrid ();
	}

	/**
	 * This function scale a point from grid values.
	 *
	 * @param x first coordinate of point;
	 * @param y second coordinate of point.
	 */
	template <class T>
	void fromGrid (T& x, T& y) {
		x /= config::getGrid ();
		y /= config::getGrid ();
	}

	/**
	 * This function scale a numeric value from grid values.
	 *
	 * @param a value of number.
	 * 
	 * @return scaled value to grids.
	 */
	template <class T>
	T fromGrid (T a) {
		return a / config::getGrid ();
	}
}

#endif