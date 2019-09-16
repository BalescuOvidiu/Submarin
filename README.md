# Submarin dronă - Clasa Arduino

<p align = "justify">
Oceanele ocupă cel puțin 71% din suprafața planetei și cea mai mare parte a lor e neexplorată. Ideologia pe care se bazează această clasă de submarin este aceea de a respecta oceanele și de a le explora. PET-ul este o masă plastică folosită de obicei la fabricarea diverselor ambalaje, care în cele din urmă ajung gunoi și contaminează apa cu microplastic. Totuși aceasta poate fi folosită pentru a proteja câteva circuite de apa rece a mării. Iar o structură metalică, poate oferi o rezistență deosebită.
</p>

<p align = "justify">
Carcasa submarinul este construită din 4 sticle de PET lipite între ele și este vopsită cu două straturi de lac de lemn. Structura interioară a submarinului se bazează pe un schelet metalic construit din plăcuțe de îmbinare, colțare și capace metalice. De asemnea fiecare compartiment a structurii are o carcasă proprie de PET Componentele electronice, motoarele și senzorii, sunt controlate cu o placă de dezvoltare Arduino Nano. Submarinul a fost testat de câteva ori în lacul Tineretului din București. Click <a href = "https://www.youtube.com/watch?v=reCAACpi1qQ" >aici</a> pentru a vedea video-ul. 
</p>

<img src = "https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/onWater.jpg"/>

## Caracteristici generale

| Nume  | UB-FMI-212  |
|:-----------------|:-------------------------|
| Cost  | 457.5 RON   |
| Deplasament   | 2.5 kg  |
| Lungime   | 95.0 cm   |
| Lățime  | 9.0 cm  |
| Pescaj  | 5.0 cm  |
| Propulsie   | 1 motor HPCB 6 V <br> 1 elice cu 7 lame   |
| Viteză  | 5.2 noduri (9.7 km / h)   |
| Autonomie   | 5:00 ore   |
| Adâncime operațională   | 5.0 metri   |
| Sensori și  sisteme de procesare  | 1 placă de dezvoltare Arduino Nano <br> 1 receptor infra-roșu pentru telecomandă <br> 1 senzor de umiditate pentru detectarea scurgeriilor  |
| Alimentare  | 4 acumulatori 1.2 V, 2100 mAh <br> 8 acumulatori 1.6 V, 1500 mAh  |


## Compartimente

|#|Compartiment|#|Compartiment|
|-:|:-|-:|:-|
| 1 | Camera propulsiei | 6 | Alimentare Arduino și sensori |
| 2 | Control hidroplane spate | 7 | Arduino și sensori |
| 3 | Alimentare Hidroplane | 8 | Corpul de navigare |
| 4 | Alimentare cârme | 9 | Control hidroplane față |
| 5 | Balast | 10 | Stabilizator |

![](img/parts.png?raw=true)


## Circuit electric

![](https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/schem.png)


## Dezvoltare

<p align = "justify">
Momentan s-au adunat 120 de ore de lucru la construirea acestui prototip: curățarea sticlelor și conservelor, modelarea carcasei și aripiilor, construirea scheletului, asamblarea și conectarea componentelor electronice.
Acesta este încă în dezvoltare, urmând să aibe implementări și îmbunătățiri ulterioare.
</p>

__Viitoare implementări:__

1. Îmbunătățirea scheletului,
2. Etanșarea și modularizarea carcasei,
3. Implementarea balastului,
4. Implementarea unei device de orientare,
5. Adăugarea unui generator din cupru și aluminiu care să încarce acumulatorii.

![](https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/inside.jpg)


### Proiect la cursul de Introducere în Robotică, anul universitar 2018 - 2019

| Universitatea București | Facultatea de Matematică și Informatică |
|:------------------------|:----------------------------------------|
| Profesor coordonator    | Bardezi Andrei                          |  
| Laborant                | Ivona Octavia                           |
| Student                 | Bălescu Ovidiu-Gheorghe                 |
| Notă evaluare           | 10 / 10                                 |


### Proiect prezentat la Sesiunea de comunicări Științifice Studențești - 2019

| Universitatea București | Facultatea de Matematică și Informatică |
|:------------------------|:----------------------------------------|
| Profesor coordonator    | Bardezi Andrei                          |  
| Student                 | Bălescu Ovidiu-Gheorghe                 |
| Loc                     | II                                      |


### Unități

<p align = "justify">
Acest tabel e pur informativ și nu se urmărește construirea mai multor unități din această clasă. Proiectul are mai mult scop educativ. Acest tabel are ca scop înregistrarea submarinelor dronă bazate pe principiile acestei clase.
</p>

| # | Nume | Dezvoltator | Primul test | Stare |
|:-|:-|:-|:-|:-|
| AR - 212 | Delfinul | Bălescu Ovidiu-Gheorghe | 23 Aprilie 2019 | În dezvoltare |
