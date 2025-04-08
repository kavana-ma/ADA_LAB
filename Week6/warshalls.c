#include&lt;stdio.h&gt;
int n;
int a[10][10];
int p[10][10];
void write_data( )
{
int i,j;
printf(&quot;The path matrix is shown below\n&quot;);
for(i=0;i&lt;n;i++)
{
for(j=0;j&lt;n;j++)
{
printf(&quot;%d&quot;, p[i][j]);
printf(&quot; &quot;);
}
printf(&quot;\n&quot;);
}
}
void read_data( )
{
int i,j;
printf(&quot;Enter the no of nodes\n&quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter the adjacency matrix\n&quot;);
for(i=0;i&lt;n;i++)
{
for(j=0;j&lt;n;j++)
{
scanf(&quot;%d&quot;, &amp;a[i][j]);
}
}
}
void path_matrix( )
{
int i,j,k;
for(i=0;i&lt;n;i++)
{
for(j=0;j&lt;n;j++)
p[i][j]=a[i][j];
}
for(k=0;k&lt;n;k++)
{
for(i=0;i&lt;n;i++)
{
for(j=0;j&lt;n;j++)

{
if((p[i][k]==1 &amp;&amp; p[k][j]==1))
p[i][j]=1;
}
}
}
}
void main( )
{
read_data();
path_matrix();
write_data();
getch();
}
