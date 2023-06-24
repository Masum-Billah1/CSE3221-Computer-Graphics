<h3>Drawing a national flag</h3>
<b>Proportion of the flag:</b> https://github.com/Masum-Billah1/CSE3221-Computer-Graphics/assets/53857306/f3396640-7470-4822-818f-e14afb774f93
<h3>Translation & Scalling</h3>
<b>Translation: </b> x'=x+tx, y'=y+ty<br>
<b>Scalling: </b> x'=x*sx, y'=y*sy
<h3>Bresenham line drawing</h3>
step1: Calculate dx,dy; dx = x<sub>2</sub>sub-x1, dy = y2-y1
step2: decision parameter p = 2dy - dx
step3:  case1. p<0 => xi+1 = xi+1, yi+1 = yi, pk+1 = pk+2dy;
	case2. p>=0 => xi+1 = xi+1, yi+1 = yi, pk+1 = pk+2dy-2dx;
