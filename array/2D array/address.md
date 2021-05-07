## Address Calculation

Address of [i,j]<sup>th</sup> element. To calculate the the address we have two ways:

 1. Row Major
 2. Column Major

## Row Major

We have the formula:

`Address = B + W [c( i - l<sub>r</sub>) + ( j-l<sub>c</sub> )]`

 - B : Base address
 - W : Number of bytes
 - c : Number of columns
 - i : row value
 - j : column value
 - l<sub>r</sub> : Lowest row value
 - l<sub>c</sub> : Lowest column value

## Column Major

We have the formula:

`Address = B + W [( i - l<sub>r</sub>) + r( j-l<sub>c</sub> )]`

 - B : Base address
 - W : Number of bytes
 - r : Number of rows
 - i : row value
 - j : column value
 - l<sub>r</sub> : Lowest row value
 - l<sub>c</sub> : Lowest column value




## Question

An array P[15][10] is stored along the column in the memory with each element requiring 4 bytes of storage. If the base address is 14000 find location of P[8][3].

`Address = B + W [( i - l<sub>r</sub>) + r( j-l<sub>c</sub> )]`

B=14000
W = 4
i=8
j=3
l<sub>r</sub>= l<sub>c</sub> = 0
r =  U - L +1
  = 15 - 0 +1 =16
address = 14000 + 4 [(8-0) + 16*(3-0)]
			  = 14224
