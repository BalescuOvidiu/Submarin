# Submarin

<table>
  <tr>
    <td valign="top" width="50%">
      <h3>Proiect la cursul de Robotică</h3>
      <h4>Universitatea București</h4>
      <h4>Facultatea de Matematică și Informatică</h4>
      <p><b>Student</b>: Bălescu Ovidiu-Gheorghe</p>
      <p><b>Laborant</b>: Ivona Octavia</p>
      <p><b>Profesor coordonator</b>: Bardezi Andrei</p>
      <p align=justify>   Proiect la cursul de Robotică, reprezentat de un submarin controlabil printr-o telecomandă, încă în dezvoltare. Acesta are ca scop de a încuraja reciclarea și explorarea oceanelor.</p>
      <p align=justify>   Oceanele ocupă aproximativ 70% din suprafața planetei și cea mai mare parte a lor e neexplorată.</p>
      <p align=justify>   Carcasa submarinul este construită din 4 sticle de PET susținută de un schelet metalic. Aripile, cârma și pupele sunt construite din tabla de la conserve, acoperite cu PET. Toate acestea sunt înfășurate în bandă adezivă.</p>
    </td>
    <td valign="top" width="50%">
      <img src="https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/IMG_20190222_184755.jpg"/>
    </td>
  </tr>
</table>

<h3>Detalii tehnice</h3>

<table><tr>
<td valign="top" width="30%"><table>
  <tr>
      <td>Nume model</td>
      <td>UB-FMI-212</td>
  </tr>
  <tr>
      <td>Lungime</td>
      <td>80 cm</td>
  </tr>
  <tr>
      <td>Lungime aripi</td>
      <td>6 cm</td>
  </tr>
  <tr>
      <td>Lățime</td>
      <td>24 cm</td>
  </tr>
  <tr>
      <td>Masă</td>
      <td>2.12 kg</td>
  </tr>
  <tr>
      <td>Volum</td>
      <td>5.6 l</td>
  </tr>
  <tr>
      <td>Alimentare</td>
      <td>21 V baterii</td>
  </tr>
  <tr>
      <td>Propulsie</td>
      <td>Motor electric 6 V</td>
  </tr>
  <tr>
      <td>Input</td>
      <td>Sensor infraroșu</td>
  </tr>
  <tr>
      <td>Output</td>
      <td>LED RGB</td>
  </tr>
  <tr>
      <td>Cost</td>
      <td>294 RON</td>
  </tr>
</table></td>
<td valign="top" width="70%"><table>
  <tr>
      <td>Nume</td>
      <td>Cantitate</td>
      <td>Preț unitar</td>
      <td>Preț total</td>
  </tr>
  <tr>
      <td>Arduino Genuino </td>
      <td>1</td>
      <td>28 RON</td>
      <td>28 RON</td>
  </tr>
  <tr>
      <td>Breadboard alb</td>
      <td>1</td>
      <td>8 RON</td>
      <td>8 RON</td>
  </tr>
  <tr>
      <td>Servomotor</td>
      <td>3</td>
      <td>20 RON</td>
      <td>60 RON</td>
  </tr>
  <tr>
      <td>Motor DC 6 V</td>
      <td>1</td>
      <td>10 RON</td>
      <td>10 RON</td>
  </tr>
  <tr>
      <td>Driver de motoare Dual L9110S</td>
      <td>1</td>
      <td>8 RON</td>
      <td>8 RON</td>
  </tr>
  <tr>
      <td>LED RGB</td>
      <td>1</td>
      <td>8 RON</td>
      <td>8 RON</td>
  </tr>
  <tr>
      <td>Receptor infraroșu</td>
      <td>1</td>
      <td>8 RON</td>
      <td>8 RON</td>
  </tr>
  <tr>
      <td>Set fire</td>
      <td>4</td>
      <td>10 RON</td>
      <td>40 RON</td>
  </tr>
  <tr>
      <td>Suport baterie 9 V</td>
      <td>1</td>
      <td>1 RON</td>
      <td>1 RON</td>
  </tr>
  <tr>
      <td>Suport baterii pătrat 4 x 1.5 V</td>
      <td>2</td>
      <td>10 RON</td>
      <td>20 RON</td>
  </tr>
  <tr>
      <td>Colțar metalic</td>
      <td>24</td>
      <td>1 RON</td>
      <td>24 RON</td>
  </tr>
  <tr>
      <td>Placă îmbinare</td>
      <td>12</td>
      <td>3 RON</td>
      <td>36 RON</td>
  </tr>
  <tr>
      <td>Bandă adezivă oțel</td>
      <td>1</td>
      <td>50 RON</td>
      <td>50 RON</td>
  </tr>
</table></td>
</tr></table>

<table>
   <tr>
     <td valign="top" width="70%">
      <img src="https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/parts.png"/>
     </td>
     <td valign="top" width="30%">
      <h3>Compartimente</h3>
      <ol>
        <li>Camera propulsiei</li>
        <li>camera de control al motoarelor</li>
        <li>Camera de comandă</li>
        <li>Camera de comunicare</li>
        <li>Camera bateriilor</li>
        <li>Pernă de aer</li>
      </ol>
     </td>
  </tr>
</table>

<img src="https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/schematic.png"/>

<table>
  <tr>
    <td valign="top" width="40%">
      <h3>Dezvoltare</h3>
      <p align=justify>   Momentan s-au adunat 90 de ore de lucru la construirea acestui prototip: curățarea sticlelor și conservelor, modelarea carcasei și aripiilor,  construirea scheletului, asamblarea și conectarea componentelor electronice.<p>
      <p align=justify>   Acesta este încă în dezvoltare, urmând să aibe implementări și îmbunătățiri ulterioare.<p>
      <h3>Viitoare implementări</h3>
      <ol>
        <li>Îmbunătățirea scheletului</li>
        <li>Etanșarea și modularizarea carcasei</li>
        <li>Implementarea balastului</li>
        <li>Implementarea unei device de orientare</li>
        <li>Înlocuirea bateriilor cu un generator din cupru și aluminiu</li>
      </ol>  
    </td valign="top" width="60%">
    <td>
      <img src="https://raw.githubusercontent.com/BalescuOvidiu/Submarin/master/img/IMG_20190222_184814.jpg"/>
    </td>
  </tr>
</table>
