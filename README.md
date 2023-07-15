---


---

<hr>
<hr>
<p><strong>#include</strong> <strong>"formatspecs.h"</strong></p>
<p><strong>/</strong>**</p>
<p>*** _printf - custom printf**</p>
<p>*** @format: format string**</p>
<p>*** Return: Result of characters printed**</p>
<p>*<strong>/</strong></p>
<p><strong>int</<stron>c</stron>strng</p>
<p> forma  formatspecsi.specfiercont  formatspecsi.print_funcasted stroing>  <strong>int</strong> i;</p>
<p><strong>int</strong> count = <strong>0</strong>, found_specifier = <stronfounspecifier   unction retrns the nmer o characters pring>0</st an error occurs anndefined"> in peciie#include "formatspecs.h"  
int  main(void) 
{ 
 int num = 42;
 char *str = "Hello, world!";
 int count = _printf("Number: %d\n
 String: %s\n", num, str); 
 return  0; 
  }
</code></pre>
<p><strong>const</strong>  <strong>size_t</strong> forlength = <strong>sizeof</strong>(formatspecs) / <strong>sizeof</strong>(formatspecs[<strong>0</strong>]);</p>
<p><strong>va_list</strong> args;</p>
<p><strong>if</strong> (format == <strong>NULL</strong>)</p>
<p><strong>return</strong> (-<strong>1</strong>);</p>
<p>va_start(args, format);</p>
<p><strong>while</strong> (*format)</p>
<p>{</p>
<p><strong>if</strong> (*format == <strong>‘%’</strong>)</p>
<p>{</p>
<p>format++;</p>
<p><strong>if</strong> (*format == <strong>‘\0’</strong>)</p>
<p><strong>return</strong> (-<strong>1</strong>);</p>
<p><strong>for</strong> (i = <strong>0</strong>; i &lt; forlength; i++)</p>
<p>{</p>
<p><strong>if</strong>{</p>
<h4 id="printf-code-example-pencil2">_printf code Example ✏️</h4>
<pre class=" language-undefined"><code class="prism language-**#include** language-undefi

**#include** **"formatspecs.h"**

**/****

*** _printf - custom printf**

*** @format: format string**

*** Return: Result of characters printed**

***/**

**int** _printf(**const**  **char** *format, ...)

{

**unsigned**  **int** i;

**int** count = **0**, found_specifier = **0**;

**const**  **size_t** forlength = **sizeof**(formatspecs) / **sizeof**(formatspecs[**0**]);

**va_list** args;

  

**if** (format == **NULL**)

**return** (-**1**);

  

va_start(args, format);

  

**while** (*format)

{

**if** (*format == **'%'**)

{

format++;

**if** (*format == **'\0'**)

**return** (-**1**);

**for** (i = **0**; i &lt; forlength; i++)

{

**if** (*format == formatspecs[i].specifier)</p>
<p>{</p>
<p>

{

count += formatspecs[i].print_func(args);</p>
<p>

found_specifier = <strong>1</strong>;</p>
<p><strong>break</strong>; }</p>
<p>}</p>
<p><strong>if</strong> (!found_specifier)</p>
<p>{</p>
<p>write(<strong>1</strong>, <strong>“%”</strong>, <strong>1</strong>);</p>
<p>count++;</p>
<p>write(<strong>1</strong>, format, <strong>1</strong>);</p>
<p>count++; }</p>
<p>} <strong>else</strong></p>
<p>{</p>
<p>write(<strong>1</strong>, format, <strong>1</strong>);</p>
<p>count++;</p>
<p>}</p>
<p>format++;</p>
<p>}</p>
<p>va_end(args);</p>
<p><strong>return</strong> (count);<br>
}<br>
``</p>
<h4 id="return-value">Return Value</h4>
<p>The <code>_printf</code>**1**;

**break**; }

}

**if** (!found_specifier)

{

write(**1**, **"%"**, **1**);

count++;

write(**1**, format, **1**);

count++; }

} **else**

{

write(**1**, format, **1**);

count++;

}

format++;

}

va_end(args);

**return** (count);
}
``
#### Return Value
The `_printf` function returns the number of characters printed. If any error occurs, a negative value is returned.<br>
</p>
<h4 id="compilation-process">
</code></pre>

#### Compilation Process</h4>
<pre><code>
````
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
</code></pre>
````
<!--stackedit_data:
eyJoaXN0b3J5IjpbNzYxNjA3NDcwXX0=
-->