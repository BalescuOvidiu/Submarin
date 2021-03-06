/**
 *  Mathematics
 * 
 *  Created 28 May 2018
 *  By Balescu Ovidiu-Gheorghe
 *  Modified 22 February 2020
 *  By Balescu Ovidiu-Gheorghe
 */

#ifndef MATHEMATICS_H_
#define MATHEMATICS_H_

#include <cmath>
#include <SFML/Graphics.hpp>
#include <vector>

/** Math constants. */
#define PI              3.141592653589793
#define EULER           2.718281828459045

/** Position macros. */
#define MID(a, b)       0.5 * (a + b)
#define MIDDLE(a, b)    sf::Vector2f (MID (a.x, b.x), MID (a.y, b.y))
#define ORIGIN          sf::Vector2f (0, 0)

/** List macros. */
#define LAST(vector, i) vector[vector.size () - i - 1]

/** Distance macros. */
#define SQUARE(a)       (a) * (a)
#define DIST(a, b)		(SQUARE (a.x - b.x) + SQUARE (a.y - b.y))
#define DISTANCE(a, b)  sqrt (DIST (a, b))

/** Percents. */
#define PERCENT_MAX 100
#define PERCENT_MID  50
#define PERCENT_MIN   0

/** Angles macross. */
#define ANGLE_MIN      0.0
#define ANGLE_RIGHT   90.0
#define ANGLE_MIDDLE 180.0
#define ANGLE_MAX    360.0

/** Trigonometric macros. */
#define COS(angle)      cos ( RADIANS (angle))
#define SIN(angle)      sin ( RADIANS (angle))
#define DEGREES(angle)  (angle) * ANGLE_MIDDLE / PI
#define RADIANS(angle)  (angle) * PI / ANGLE_MIDDLE

/** Geometric functions. */
bool isInCircle (
	sf::Vector2f center, 
	double radius, 
	sf::Vector2f point
);
bool isInRectangle (
	sf::Vector2f origin, 
	double width, 
	double height, 
	sf::Vector2f point
);
bool isInTriangle (
	sf::Vector2f a,
	sf::Vector2f b,
	sf::Vector2f c,
	sf::Vector2f d
);
double area (
	sf::Vector2f a,
	sf::Vector2f b,
	sf::Vector2f c
);

/** These functions work with determinants. */
double det (
	sf::Vector2f a,
	sf::Vector2f b,
	sf::Vector2f c
);

/** Interval functions. */
bool isInInterval (double value, double a, double b);
bool isNotInInterval (double value, double a, double b);
double scaleIntervalToInterval (double value, double a, double b, double c, double d);

/** Trigonometric functions. */
double getCosInDegrees (sf::Vector2f start, sf::Vector2f end);
double getSinInDegrees (sf::Vector2f start, sf::Vector2f end);
double getCosInRadians (sf::Vector2f start, sf::Vector2f end);
double getSinInRadians (sf::Vector2f start, sf::Vector2f end);
double getAngleInDegrees (sf::Vector2f start, sf::Vector2f end);
double getAngleInRadians (sf::Vector2f start, sf::Vector2f end);
double mapAngleInDegrees (double angle);
double translateDegreesToScreen (double angle);

/**
 * This function return maximum between two numeric values.
 *
 * @param a first numeric value,
 * @param b second numberic value.
 *
 * @return maximum between these two values.
 */
template <class N>
N max (N a, N b) {
	if (a > b) {
		return a;
	}
	return b;
}

/**
 * This function return minimum between two numeric values.
 *
 * @param a first numeric value,
 * @param b second numberic value.
 *
 * @return minimum between these two values.
 */
template <class N>
N min (N a, N b) {
	if (a < b) {
		return a;
	}
	return b;
}

/**
 * This function return maximum of a list of numeric values.
 *
 * @param b second numberic value.
 *
 * @return minimum of these values.
 */
template <class N>
N max (std::vector<N> value) {
	N maxValue = value[0];
	for (unsigned i = 1; i < value.size(); i++) {
		if (maxValue < value[i]) {
			maxValue = value[i];
		}
	}
	return maxValue;
}

/**
 * This function return minimum of a list of numeric values.
 *
 * @param b second numberic value.
 *
 * @return maximum of these values.
 */
template <class N>
N min (std::vector<N> value) {
	N maxValue = value[0];
	for (unsigned i = 1; i < value.size(); i++) {
		if (maxValue > value[i]) {
			maxValue = value[i];
		}
	}
	return maxValue;
}

#endif