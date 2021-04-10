# Rotating a bit string

> Author : Ya Chen<br>
> Date : 2021 / 3 / 31<br>
> List :
>
> > <a href = "#description">Description</a><br><a href = "#examples">Examples</a>

---

<br>
<div id = "description">

## Description

Write a function `rightrot(x,n)` that returns the value of the integer `x` rotated to the right by `n` bit positions.

For example:

```c
Given x = 23, n = 4
and then

                23 = 10111 ​

Now, the x rotated to the right by 4
bits positions:

                15 = 01111
```

Other example:

```c
Given x = 279, n = 1
and then

                279 = 100010111

Now, the x rotated to the right by 4 bits positions:

                395 = 110001011
```

</div>
<br>
<br>
<div id = "examples">

## Examples

### Input 1

```
0 1
```

### Output 1

```
0
```

<br>

### Input 2

```
16 2
```

### Output 2

```
4
```

<br>

### Input 3

```
20210330 1210
```

### Output 3

```
21843224
```

<br>

### Input 4

```
20210330 500000
```

### Output 4

```
20210330
```

</div>
