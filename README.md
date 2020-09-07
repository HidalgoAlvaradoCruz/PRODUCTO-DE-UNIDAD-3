# CALCULADORA BÁSICA PARA SUMAR Y RESTAR DOS NÚMEROS DE 8 BITS

<br>

**1.PLANTEAMIENTO DEL PROBLEMA**

Se desconoce el funcionamiento, diseño y conexión de un circuito para sumar y restar dos números de 8 bits implimentando el integrado 4511 y 7483 con un mecanismo para multiplexar las salidas de forma que permita seleccionar el resultado de la operación, que se visualice en un display implementado en el Constructor Virtual y Simulador de Circuitos Digitales, para lo cual se formularon las siguientes preguntas: 

•	¿Cómo se diseña un circuito para sumar y restar dos números de 8 bits?

•	¿Cómo se diseña un mecanismo para multiplexar la salida de forma que permita seleccionar el resultado de la operación, suma o resta?

•	¿Cómo funcionan los integrados 7483 y 4511?

<br>

**2.OBJETIVOS**

**Objetivo general**

Diseñar una calculadora básica para sumar y restar dos números de 8 bits.

**Objetivos específicos**

•	Comprender la estructura básica de funcionamiento del software de simulación Constructor Virtual y Simulador de Circuitos Digitales.

•	Entender el funcionamiento del mecanismo para multiplexar las salidas del circuito .

•	Identificar los principales parámetros de funcionamiento del integrado 4511 y 7483. 

<br>

**3.ESTADO DEL ARTE**

<br>

En 2018, Palash Kailash Rai, Shivoy Srivastava y Ayoush Johri del Departamento de Electrónica y Comunicación
Lakshmi Narain College of Technology & Science Bhopal, India implementaron un diseño y simulación de un marco de almohadilla de circuitos lógicos y aritméticos de 8 bits utilizando el proceso C5 para CMOS submicrónicos profundos su estudio, se basa en implementar circuitos aritméticos y lógicos comprenden la lógica combinatoria que implementa operaciones lógicas como AND y OR, y operaciones aritméticas como la suma, la resta y la multiplicación. El circuito lógico aritmético de 8 bits se diseña, implementa y simula utilizando el software Electric CAD y SPICE, dicho circuito aritmético y lógico de 8 bits que puede realizar: A Y B, A OR B, A + B (suma) y A - B (resta) y todas las posibles operaciones aritméticas y lógicas (Rai, PK, Srivastava, S. y Johri, A, 2018, p.1) [1].

<br>

Syamala, Y. y Tilak del Departamento de ECE Colegio de Ingeniería Gudlavalleru Gudlavalleru, Indiaen en 2011 centraron su investigación en el diseño de una Unidad de lógica aritmética reversible, esta tecnología es de creciente importancia para muchas tecnologías informáticas futuras, el diseño de una Unidad de lógica aritmética (ALU) reversible utilizando la unidad multiplexora y las señales de control. En la ALU basada en multiplexor, las operaciones se realizan según la línea de selección. La ALU basada en la unidad de control se desarrolla con 9n puertas reversibles elementales para cuatro operaciones lógicas aritméticas básicas en dos operandos de n bits. La investigación de Syamala y Tilak basaron el diseño en una serie de operaciones realizadas en la misma línea dependiendo de las señales de control, en lugar de seleccionar el resultado deseado por un multiplexor (Syamala, Y. y Tilak, 2011, p.1) [2].

<br>

En 2018, Mahmoud Aymen Ahmed y M. A. Abdelghany investigadores del Departamento de electronica Facultad de Educación Industrial, Universidad de Sohag. Sohag, EGIPTO implemnetaron una Unidad lógica aritmética de 4 bits de baja potencia que utiliza la técnica GDI de giro completo su análisis sobre la disipación de energía y el área del circuito son los problemas principales en la industria electrónica, este documento proporciona un diseño de Unidad de lógica aritmética (ALU) de 4 bits utilizando la técnica GDI de giro completo, que consideró un método eficaz para el diseño digital de baja potencia al tiempo que reduce el área del circuito en comparación con otros estilos lógicos (Ahmed MA, Abdelghany MA, 2018, p.1) [3].

<br>

Cortés Barrón, Reyes Barranca, L. M. Flores-Nava, A. Medina Santiago del Instituto Tecnológico de Tuxtla Gutiérrez, Chiapas, México en 2012 implementaron una Unidad de lógica aritmética (ALU) de 4 bits basada en transistores Neuron MOS. Esta configuración es reconfigurable modificando solo los voltajes externos aplicados a una etapa intermedia de inversores CMOS programables, sin ningún cambio de circuito, en contraste con las implementaciones digitales convencionales basado en un método gráfico llamado Diagrama de potencial de puerta flotante (FPD), se diseñó y simuló una ALU de 4 bits muy básica para un par de funciones aritméticas y lógicas, aprovechando la suma ponderada realizada en la puerta flotante del neu-MOS (Cortes Barron, Reyes Barranca, 2018, p.1) [4].

<br>

Para el producto de unidad presente, se utilizó el Constructor Virtual y Simulador de Circuitos Digitales para implemnetar un circuito SUMADOR/RESTADOR 8 Bits diseñando un mecanismo para multiplexar las salidas a manera de un selector de operación (Rai, PK, Srivastava, S. y Johri, A, 2018, p.1), el ingreso de los 8 bits de datos se realiza manualmente mediante dips switch, el circuito básicamente tiene la configuración de una ALU (unidad lógica aritmética) (Syamala, Y. y Tilak, 2011, p.1). El sistema tiene la capacidad de proyectar un número decimal de salida en la pantalla del dispositivo android simulando la proyección de un display de 7 segmentos (Cortes Barron, Reyes Barranca, 2018, p.1).

<br>

<br>

**4.MARCO TEÓRICO**

<br>

**Constructor Virtual y Simulador de Circuitos Digitales** 

El programa cuenta con elementos que acompañan frecuentemente a los circuitos digitales:
protoboards, interruptores, pulsadores, leds y visualizadores de siete segmentos. Es posible colocar
hasta diez protoboards, cada uno con capacidad para ocho circuitos integrados. Además, el
programa provee un temporizador (generador de señales periódicas) y una fuente de energía
eléctrica (fuente DC de 5 V). La figura 1 muestra una vista de los tableros principales.
Adicionalmente, el programa incluye escenarios virtuales sobre tableros que pueden hacer interfaz
lógica con otros tableros y circuitos sobre los protoboards.

Los tableros pueden ser insertados desde el menú Tableros. Cada tablero tiene unas marcas que
sirven para trasladarlos (presionando con el botón izquierdo del ratón) o para eliminarlos (pulsando
con el botón derecho del ratón). Al desplazar un tablero los cables mantienen las conexiones y sus
formas cambian ligeramente. Antes de retirar un tablero debes retirar sus cables y componentes. Los
tableros del programa pueden sobreponerse unos a otros. Es recomendable evitar las situaciones que
no se reflejen en la realidad. 


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/s1.jpg)

<br>

**Multiplexores**

Son circuitos combinacionales que tienen varias entradas, una sola salida y varias líneas de selección. Su funcionamiento podría asemejarse a un conmutador de varias posiciones que simularían las entradas y el terminal común, la salida; la conmutación se realizaría por medio de la línea de selección, de tal modo que las señales presentes en las entradas aparecerán en la salida en el orden indicado por la línea de selección; es decir, un multiplexor permite el envío por una sola línea de los datos presentes en varias líneas.
@@ -89,20 +87,14 @@ Los tres componentes más importantes de un multiplexorson:

Las líneas de entrada de datos se determinan por 2 elevadoa a la (n) donde n es el número de entradas de selección de datos, es decir para dos entradas de selección de datosse puede tener = 4 líneas de entrada de datos.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img2.jpg)

**MULTIPLEXOR CI 74LS157** 


Contiene cuatro multiplexores con dos entradas de datos cada uno.La entrada de selección de datos es la misma para todoslos multiplexores que conforman este integrado, donde las 4 primeras entradas se activan a nivel bajo (0) y las 4 restantes se activan a nivel alto (1).La activación de los multiplexores en general se da mediante un terminal denominado “ENABLE” el cual debe encontrarse activo a nivel bajo (0).

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img3.png)

**SUMADOR CI 74LS83**


Es un sumador binario de 4-Bit donde las sumas (Σ) se proporcionan para cada bit y el acarreo resultante (C4) se obtiene a partir del cuarto bit. Estos agregadores cuentan con una mirada interna completa a través de los cuatro Bits  Cuenta con una implementación de ripple-carry. La lógica del sumador, incluido el carry, se implementa en su forma verdadera, lo que significa que el logrado sin necesidad de inversión lógica o de nivel.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img5.jpg)

Acarreo a lo largo de los cuatro bits

-Los sistemas logran un rendimiento de anticipación parcial con la economía de la ondulación de llevar
@@ -115,93 +107,10 @@ Acarreo a lo largo de los cuatro bits

-Disipación de potencia típica por sumador de 4 bits 95

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img4.jpg)

**COMPARADOR CI 74LS85**

Son circuitos integrados combinacionales con uno o más pares de entradas que tienen como función comparar dos magnitudes binarias para determinar su relación.

El comparador más básico, que determina si dos números son iguales, se consigue mediante una puerta XOR (or exclusiva), ya que su salida es 1 si los dos bits de entrada son diferentes y 0 si son iguales.

Muchos comparadores poseen además de la salida de igualdad, dos salidas más que indican cual de los números colocados a la entrada es mayor (M) que el otro, o bien es menor (m) que el otro.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img6.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img7.jpg)

**DECODIFICADOR CI 74HC4511**

Son circuitos combinacionales integrados que disponen de n entradas y un número de salidas igual o menor a 2n, actúan de modo que según cual sea la combinación de las variables de entrada se activa una única salida, permaneciendo el resto de ellas desactivada.

Suelen disponer de una entrada adicional denominada de inhibición o strobe de modo que cuando esta entrada se encuentra activada, pone todas las salidas a 0.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img8.jpg)



**COMPUERTA XOR – Compuerta O Exclusiva CI 74HC86**

En la electrónica digital hay compuertas que no son comunes. Una de ellas es la compuerta XOR ó compuerta O exclusiva ó compuerta O excluyente. El diagrama inferior muestra el símbolo de una compuerta XOR (O exclusiva) de 2 entradas.
Comprender el funcionamiento de esta compuerta digital es muy importante para después poder implementar lo que se llama un comparador digital.

La puerta lógica OR-exclusiva, más conocida por su nombre en inglés XOR, realiza la función booleana A'B+AB'. Su símbolo es el más (+) inscrito en un círculo. En la figura de la derecha pueden observarse sus símbolos en electrónica.


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img15.png)

El circuito integrado que contiene la compuerta XOR, es el 74LS86, el cual posee internamente 4 compuertas XOR, como se muestra en la figura, hay que tener en cuenta que el pin 7 debe estar conectado a Tierra (GND) y el pin 14 a Positivo (Vcc),

**4HC86** 


4 compuertas XOR  74HC86 de dos entradas. CMOS

Una puerta lógica, o compuerta lógica, es un dispositivo electrónico con una función booleana. Suman, multiplican, niegan o afirman, incluyen o excluyen según sus propiedades lógicas. Se pueden aplicar a tecnología electrónica, eléctrica, mecánica, hidráulica y neumática. Son circuitos de conmutación integrados en un chip.

Características:

4 compuertas XOR de dos entradas c/u

Tecnología: High Speed CMOS (HC)

Funcionamiento lógico y organización de pines compatible con la familia LS-TTL

Alta inmunidad al ruido

Muy bajo consumo de potencia, similar a los C.I. CMOS estándar

Alta velocidad

Voltaje de alimentación: 2V a 6V

Encapsulado: DIP 14 pines

**COMPUERTA NAND CI 74HC00**

La puerta lógica NO-Y, más conocida por su nombre en inglés NAND, realiza la operación de producto lógico negado.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img12.png)

El circuito integrado que contiene la compuerta NAND, es el 74LS00, el cual posee internamente 4 compuertas NAND, como se muestra en la figura, hay que tener en cuenta que el pin 7 debe estar conectado a Tierra (GND) y el pin 14 a Positivo (Vcc),

**COMPUERTA AND CI 74HC00**

La puerta lógica Y, más conocida por su nombre en inglés AND (AND \equiv Y \equiv \and  ), realiza la función booleana de producto lógico. Su símbolo es un punto (·), aunque se suele omitir. Así, el producto lógico de las variables A y B se indica como AB, y se lee A y B o simplemente A por B.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img13.png)


El circuito integrado que contiene la compuerta AND, es el 74LS08, el cual posee internamente 4 compuertas AND, como se muestra en la figura, hay que tener en cuenta que el pin 7 debe estar conectado a Tierra (GND) y el pin 14 a Positivo (Vcc).


**COMPUERTA OR CI 74HC32**

La puerta lógica O, más conocida por su nombre en inglés OR (OR \equiv O \equiv \or ), realiza la operación de suma lógica.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img14.png)
<br>

El circuito integrado que contiene la compuerta OR, es el 74LS32, el cual posee internamente 4 compuertas OR, como se muestra en la figura, hay que tener en cuenta que el pin 7 debe estar conectado a Tierra (GND) y el pin 14 a Positivo (Vcc),


**5. DIAGRAMAS**

<br>

**A. DIAGRAMA ELÉCTRICO**

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de1.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de2.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de3.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de4.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de5.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de6.jpg)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/de7.jpg)

<br>

**EXPLICACIÓN:**

<br>

El diagrama eléctrico muestra las respectivas conexiones realizadas por etapas, empezando por el ingreso de datos hasta la proyección final en 9 display de 7 segmentos de cátodo común.

**•	INGRESO DE NÚMEROS**

Es la primera etapa del circuito corresponde al ingreso de datos por medio de dos dips switch con 8 selectores, permiten al ususario ingresar un número binario de máximo 8 bits. Los números ingresados se pueden evidenciar tanto en las pantallas de los display como número decimal al igual que mediante focos LEDS como número binario.

**• SUMADOR**

En esta sección se realiza la suma de los dos números de 8 bits ingresados en la etapa anterior, para cumplir con este propósito se coloca dos sumadores  7483 conectados en cascada, para comprobar la funcionalidad de esta etapa se coloco una fila de 9 focos led que representan el resultado de la suma, el noveno led representa el acarreo.


**• RESTADOR**

La resta se divide en dos casos, para cada caso se utilizan negadores y sumadores en cascada, según el caso en el que recae se implementa un multiplezor para elegir la señal de salida, la elección de los casos se realiza mediante un comparador 7485, para comprobar la funcionalidad de esta etapa se coloco una fila de 9 focos led que representan el resultado de la resta, el noveno led representa el signo.


**• SELECCION DE OPERACIÓN**

En esta etapa se utiliza un multiplexor para proyectar la respuesta final, este multiplexor permite al usuario elegir que operación desea realizar suma "0" o resta "1", según la selección se proyecta el resultado.


**• DECODIFICACIÓN DE BCD A 7 SEGMENTOS**

Es importante notar que a partir del primer sumador implementado para esta sincronización si se necesita un nuevo dígito simplemente se aumenta más sumadores, los cuáles tendrán las mismas conexiones que el primero al igual que en los decodificadores.


**• SALIDAS DE LOS DECODIFICADORES HACIA LOS DISPLAY**

Una vez hecha la decodificación las salidas de cada integrado 4511 son direccionadas a los display para la proyección, teniendo en cuenta el dígito que representa dichas salidas.


<br>

**B. DIAGRAMA DE BLOQUES**

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/db1.jpg)

<br>

**EXPLICACIÓN:**

El diagrama muestra una esquematización del circuito, se encuentra divido por etapas de operción o procesos que a su vez cuentan con subprocesos, cada proceso se rige a la función de un elemento en específico.

- CIRCUITO SUMADOR------------ INTEGRADO 7483
- CIRCUITO RESTADOR----------- COMPLEMENTO 1, SUMADOR 7483, COMPARADOR 7485 (casos de la resta)
- SELECTOR DE OPERACIÓN-------- MULTIPLEXOR DE 2 A 1
- DECODIFICADOR---------------- INTEGRADO 4511
- DISPLAY---------------------- DISPLAY DE 7 SEGMENTOS DE CÁTODO COMÚN 

<br>

**6. MAPA DE VARIABLES**

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img16.png)
![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img17.png)
![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img18.png)

**7.EXPLICACIÓN DEL CIRCUITO**

**Ingreso de números en BCD**

Para el ingreso de números en BCD se tiene 2 dip switch de 8 interruptores cada uno, en la parte superior, el primer dip switch representa el número A y el segundo dip switch el número denotado por B.

Hay que tomar en cuenta que los dip switch tomandoles en cuenta de abajo hacia arriba, [abajo- bits menos significativo] y [arriba-bits más significativo]. Es necesario comprender lo anteriormente explicado para el correcto ingreso de números BCD. Al momento de realizar las conexiones de los dip switch se conectó a + Vcc (5 V) los dígitos activados en 0 y a tierra los dígitos activados en 1

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img19.png)

Para sumar o restar números en BCD por medio de un dip switch extra donde [Up-Resta] y [Low-Suma].

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img20.png)

Se conecta las  8 salidas de los dip switch de los bits menos significativos tanto del número A como del B a un sumador 7483  con el acarreo de entrada a tierra y este sumador en cascada a otro sumador 7483 conectado al acarreo de entrada las 8 salidas de los dip switch de los bits más significativos tanto del número A como del B.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img21.png)

**Complemento A1**

Para realizar la resta es necesario negar los 8 bits de salida tanto del número A como del número B y conectar a los sumadores conectados en cascada, algo a tomar en cuenta el acarreo de entrada del primer sumador va a conectado a VCC que representa implícitamente más uno.

Exiten dos casos:

A>B 

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img22.png)

B>A

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img23.png)

**Signo de la resta caso A<B**

Para el caso de la resta hay que tomar en cuenta que va a exitir un signo menos[-] en el caso A<B para esto hay que utilizar dos integrados 7485 que se encargan de comparar tanto el número A como el B .

Hay que tomar en cuenta que el primer integrado compara los bits menos significativos tanto del número A como del número B y el segundo integrado compara los bits mas significativos tando del número A como del B.

Para finalmente obtener el signo de la resta es necesario conectar los circuitos comparadores a la función [(A<B).(A=C)]+(A.1<B.1) ya que sis sus entradas estan en un nivel alto el resultado será un nivel bajo es decir el signo menos.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img24.png)

**Selección del caso de la resta:**

Ya obtenido el signo como una salida ,junto con las salidas de los dos comparadores, iran conectadas a dos multiplexores en cascada 74157 circuito que  contiene cuatro multiplexores con sus dos entradas de datos y su salida cada uno, esta es la razón por la que se usará dos de ellos ya que el circuito cuenta con 8 bits y como exiten dos entradas de datos completarian los 16 bits.
Se debe tomar en cuenta que en el primer integrado se conectan los bits menos significativos tanto del número A como del B y en el segundo integrado se conectan los bits más significativos tanto del número A como del B.

La entrada de inhibición (STROBE G o A'/B) activa a nivel bajo (0V) es decir la salida que representa el signo y la entrada de selección (SELECT), comunes a los cuatro multiplexores,  es la que va conectada en común con el segundo multiplexor.

Algo importante a tomar en cuenta es que STROBE está a nivel bajo, si la entrada SELECT está a nivel bajo por lo tanto irán a tierra.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img25.png)

**Selección de la operación suma o resta:**

Para la selección de la operación se utiliza 3 multiplexores en cascada.El primer y segundo integrado van conectados las salidas de los dos primeros sumadores (sin negar) junto con la salida del switch que indica la operación a realizarse ya sea la suma o la resta.

Es importante saber que el primer integrado va conectado a los bits menos significativos tanto del A como del B y el segundo integrado a los bits más significativos tanto del número A como del B.

La entrada de inhibición (STROBE G o A'/B) activa a nivel bajo (0V) es decir la salida que representa el signo y la entrada de selección (SELECT), comunes a los cuatro multiplexores, que es la que va conectada en común con el segundo y tercer multiplexor, ya que que STROBE está a nivel bajo, si la entrada SELECT está a nivel bajo, por lo tanto irán a tierra.

El tercer integrado indica tanto el signo de la resta o el acarreo de la suma por lo que está conectado al acarreo de la salida del segundo sumador (sin negar) y a la salida del comparador que indica el signo de la resta en el caso A<B junto con la salida del switch que indica la operación a realizarse ya sea la suma o la resta.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img26.png)

**Sincronización de los de los números a sumar o restar y la respuesta**

Las compuertas and y or  juntas funcionan como un generador de pulsos, a manera de un reloj tanto para los sumadores como para los decodificadores 4511 determinando tanto la velocidad con la que se actualizaran los datos en el display y el instante en la que se hará esa actulización.

La compuerta OR juega en el circuito un papel muy importante ya que en el proceso del conteo los pines de los bits menos significativos pueden activarse y desactivarse varias veces y lo que se necesita en este circuito es solo la última activación es decir los últimos tres bits más significativos.

Cuando la salida de la operación realizada por los multiplexores sea mayor que cero se estará ejecutando los display de manera estable pero cuando sea cero o esté en estado bajo es necesario una compuerta AND para  detener la generación de mas pulsos de lo necesario en este caso solo para 8 bits.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img28.png)

Entonces partiendo de estas características generales del circuito  se empieza con la sincronización del circuito para poder proyectar los números en los display partiendo de las 3 señales principales a utilizarse similares en su función a un diagrama de tiempo. Simplemente haciendo las comparaciones restantes con los bits restantes es decir (solo 7 bits )sin llegar al bit menos significativo que será conectado directamente al decodificador.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img29.png)

Todo esto conectando en cascada tanto compuertas AND, OR, SUMADORES y DECODDIFICADORES.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img30.png)

Es importante notar que a partir del primer sumador implementado para esta sincronización si se necesita un nuevo dígito simplemente se aumenta más sumadores, los cuáles tendrán las mismas conexiones que el primero al igual que en los decodificadores.


**Visualización en los diplay de 7 segmentos de los números a sumar o restar y la respuesta**

Para finalizar se conecta directamente las salidas de los decodificadores 4511 a cada uno de los display cátodo común.

El display que indica el signo en la resta  y el acarreo en la suma  todas sus entradas vana conectadas a la salida del tercer multiplexor que justamente nos indica lo dicho anteriormente.

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img27.png)

<br>

**8. DESCRIPCIÓN DE PRERREQUISITOS Y CONFIGURACIÓN**

<br>

El Constructor Virtual y Simulador de Circuitos Digitales es un programa propio de Windows de libre acceso que puede ser ejecutado en cualquier versión a partir de Windows XP: 

•	Windows: Windows XP, Windows Vista, Windows 7 y versiones superiores

<br>

El simulador de Construcción de Circuitos Digitales con Escenarios Virtuales y Tutoriales Interactivos es un programa para construir circuitos digitales sobre un módulo digital virtual al ser un programa básico no necesita ningún tipo de configuración externa, el ejececutable se puede descargar del repositorio en la parte de instaladores.
<br>

**10. APORTACIONES**

Implementación de 6 display de 7 segmentos cátodo común y focos led que vizualicen los dos números ingresados A y B a sumar o a restar en el circuito. 

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img37.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img38.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img39.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img40.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img41.png)


**11. CONCLUSIONES**

En conclusión:

<br>

• Para implementar el circuito SUMADOR /RESTADOR DE 8 bits  inicialmente se utiliza sumadores 	7483 de 4 bits en cascada para lograr una interacción de 8 bits por número, como resultado a la salida se genera un numero de 9 bits siendo el noveno bit el de acarreo, mediante este proceso se pudo concluir que en el caso de la suma el bit de acarreo representa el bit más significativo del resultado para aquellos números decimales que sobrepasen los 8 bits en su representación binaria, mientras que en la resta el bit de acarreo representa el SIGNO en el caso que el resultado sea un número negativo.

•	A partir del circuito SUMADOR se implementa el RESTADOR teóricamente se puede aplicar el complemento 1 o complemento 2 para efectuar la resta, en la práctica esto no ocurre así, a pesar que el método más fácil para hallar la resta es aplicar el complemento 1, surge la necesidad de utilizar integrados comparadores para identificar cada caso de la resta y seleccionar el resultado adecuado.


• Para implementar el sistema que permita elegir entre una opración u otra se debe multiplexar las salidas, dicho proceso está en que todo este sistema tiene que ir conectado a un dip switch o selector y el voltaje alto (H) o bajo (L), que llegue al dip será el que rija la operación "L" o "0" para la suma y "H" o "1" para la resta.


• Para analizar, diseñar e implementar el circuito lo más factible es dividirlo por etapas la mismas que van a describir cada parte importante del circuito como, el ingreso de los datos, la etapa del Sumador, la etapa del Restador , la del selector o Multiplexación y finalmente la etapa del decodificador BCD 4511 a 7 segmentos, en esta etapa para mostrar el resultado en un display se lo realiza según el valor máximo resultante de realizar la suma de los dos número de 8 bits en este caso el valor máximo que se puede obtener es 510 en número decimal con un acarreo, para representar esta cifra en un display de cátodo común se utilizan decodificadores 4511 conectados en cascada y para la proyección 4 display, uno para cada dígito del resultado y el cuarto display para el signo de la resta. A pesar que el circuito cuenta con diferentes etapas de análisis, el desarrollo del mismo tiene como principio fundamental la conexión de dispositivos en CASCADA.

<br>

**12. RECOMENDACIONES**

<br>

• Es recomendable al momento de realizar la implementación del circuito en el Constructor Virtual y Simulador de Circuitos Digitales conectar a tierra las todas las salidas de los integrados que no se ocupen, en algunos integrados esto no influye pero existen ciertos casos que al no realizar esta conexión a tierra afecta a los valores lógicos recibidos a las entradas.   

•	Antes de proyectar el resultado de la resta se deben analizar los tres casos en los que puede recaer, lo mejor es para controlar y seleccionar el caso es utilizar un comparador seguido de un multiplexor para elegir la respuesta.

• Al momento de cambiar de una etapa del circuito a otra, es de gran ayuda colocar focos led para verificar si los valores lógicos que ingresan o salen del de cada etapa son los correctos, puesto que una mala conexión desencadena una serie de errores en el circuito.


<br>

**13. CRONOGRAMA**


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img37.jpeg)


**14. BIBLIOGRAFÍA**

<br>

[1] Rai, PK, Srivastava, S. y Johri, A. (2018). Diseño, diseño y simulación de un marco de almohadilla de circuitos lógicos y aritméticos de 8 bits utilizando el proceso C5 para CMOS submicrónicos profundos. Conferencia Internacional de Computación y Telecomunicaciones Avanzadas de 2018 (ICACAT). doi: 10.1109 / icacat.2018.8933609 


[2] Syamala, Y. y Tilak, AVN (2011). Unidad de lógica aritmética reversible. 2011 III Congreso Internacional de Tecnología Informática Electrónica. doi: 10.1109 / icectech.2011.5941987 


[3] Ahmed, MA, y Abdelghany, MA (2018). Unidad lógica aritmética de 4 bits de baja potencia que utiliza la técnica GDI de giro completo. Conferencia internacional 2018 sobre tendencias innovadoras en ingeniería informática (ITCE). doi: 10.1109 / itce.2018.8316623 


[4] Cortes-Barron, EA, Reyes-Barranca, MA, Flores-Nava, LM y Medina-Santiago, A. (2012). Unidad de lógica aritmética (ALU) de 4 bits basada en transistores Neuron MOS. 2012 Novena Conferencia Internacional sobre Ingeniería Eléctrica, Ciencias de la Computación y Control Automático (CCE). doi: 10.1109 / iceee.2012.6421136 


[5]Marin, J. (20-12-20). Contados Ascendente. BlogSpot. http://jmaarin.blogspot.com/2017/12/contador-ascendente-con-ci-7493.html

[6]Monroy, M. (2018, 26 diciembre). Temporizador. Medium.com. https://medium.com/@m.monroyc22/temporizador-555-243abcb933a5

[7]Gonzales, R. (2019, 7 abril). Contador Binario. Electrónica Digital. https://personales.unican.es/manzanom/Planantiguo/EDigitalI/CONTG5.pdf

[8]Fuente, F. (2017, 24 enero). Decodificador bcd a 7 segmentos. Wilaeba Electronica. https://wilaebaelectronica.blogspot.com/2017/01/decodificador-bcd-a-7-segmentos.html

<br>

**15. ANEXOS**

**15.1. MANUAL DE USUARIO**

<br>

**1.** Para ejecutar el Constructor Virtual y Simulador de Circuitos Digitales, dirigirse al apartado de instaladores del Github, una vez en el directorio se deben descargar los siguientes archivos: 

- Constructor Virtual de Circuitos.exe (ejecutable)

- Sumador-Restador.txt  (Implementación del proyecto)

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m1.jpg)

<br>


![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m2.jpg)

<br>

**2.** Una vez descargados los archivos, el primer paso es ejecutar el archivo ConstructorVirtualDeCircuitos.exe que vendría a ser el aplicativo.

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m3.jpg)

<br>

**3.** Al momento que se ejecuta el aplicativo aparece la siguiente ventana, el siguiente paso es darle clic al icono de abrir y seleccionamos la ubicación del archivo Sumador-Restador.txt que descargamos en la parte inicial, clic en Abrir.

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m4.jpg)

<br>

**4.** Se puede observar que aparece en pantalla el circuito correspondiente al proyecto realizado, para ejecutar la simulación simplemente accionamos el interruptor para que se active el paso de energía. 

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m5.jpg)

<br>

**5.** Para ingresar los números que se desea sumar o restar accionamos los interruptores según el código binario de 8 bits, para seleccionar la operación se realiza una selección simple:

"0" APAGADO ..... SUMA

"1" ENCENDIDO ..... RESTA 

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m7.jpg)

<br>



**6.** Segun los números en código binario y la operación que ingresemos en los selectores se puede observar a la salida el resultado de la operación.

<br>

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/m8.jpg)

<br>

<br>

**15.2. HOJAS TÉCNICAS**

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img34.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img35.png)

![](https://github.com/HidalgoAlvaradoCruz/PRODUCTO-DE-UNIDAD-2/blob/master/img/img36.png)

