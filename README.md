<h3>Drawing a national flag</h3>
<b>Proportion of the flag:</b> https://github.com/Masum-Billah1/CSE3221-Computer-Graphics/assets/53857306/f3396640-7470-4822-818f-e14afb774f93
<h3>Translation & Scalling</h3>
<b>Translation: </b> x'=x+tx, y'=y+ty<br>
<b>Scalling: </b> x'=x*sx, y'=y*sy
<h3>Bresenham line drawing</h3>
<b>step1: </b>Calculate dx,dy; dx = x<sub>2</sub>-x<sub>1</sub>, dy = y<sub>2</sub>-y<sub>1</sub><br>
<b>step2: </b> decision parameter p = 2*dy - dx<br>
<b>step3: </b><br>  
&emsp;case1. p<0 => x<sub>i</sub>+1 = x<sub>i</sub>+1, y<sub>i</sub>+1 = y<sub>i</sub>, p<sub>k</sub>+1 = p<sub>k</sub>+2dy;<br>
&emsp;case2. p>=0 => x<sub>i</sub>+1 = x<sub>i</sub>+1, y<sub>i</sub>+1 = y<sub>i</sub>, p<sub>k</sub>+1 = p<sub>k</sub>+2dy-2dx;
