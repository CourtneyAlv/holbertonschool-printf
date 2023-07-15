---


---

<h1 id="readme.mdnotebook"><a href="http://README.md">README.md</a>📓</h1>
<h2 id="printf.c-projectmemo"><em>_printf.c project</em>📝</h2>
<h3 id="description-book">Description: 📖</h3>
<p>The code in <code>main.c</code> implements a custom <code>printf</code> function, <code>_printf</code>, which replicates the behavior of the standard <code>printf</code> function in C. It allows you to print formatted output to the console.</p>
<h3 id="usage-computer">Usage: 💻</h3>
<p>To use the <code>_printf</code> function, you have to include the header files: <code>main.h</code> and <code>formatspecs.h</code>. The <code>main.h</code> header file contains function prototypes and necessary definitions. The <code>formatspecs.h</code> likely contains the definitions of format specifiers and their printing functions.</p>
<h4 id="introduction-dart">Introduction: 🎯</h4>
<p>Our <code>_printf</code> function provides an easy way to format and print the output in C. It supports format specifiers that allow you to print different types of data with customized formatting.</p>
<h4 id="format-example">Format example</h4>
<p><strong>code</strong><br>
<code>int _printf(const char *format, ...);</code></p>
<h4 id="format-specifiers-calling">Format Specifiers 📲</h4>
<ul>
<li><code>%c</code> - prints a single character</li>
<li><code>%s</code> - prints a null-terminated string</li>
<li><code>%d</code> or <code>%i</code> - prints a signed decimal integer</li>
<li><code>%</code>- to declare conversion specifiers</li>
</ul>
<h4 id="main-code-example-pencil">Main Code Example 📝</h4>
<pre class=" language-undefined"><code class="prism language-#include language-undefined">#include "formatspecs.h"  
int  main(void) 
{ 
 int num = 42;
 char *str = "Hello, world!";
 int count = _printf("Number: %d\n
 String: %s\n", num, str); 
 return  0; 
  }
</code></pre>
<p>{</p>
<h4 id="printf-code-example-pencil2">_printf code Example ✏️</h4>
<pre class=" language-undefined"><code class="prism language-**#include** language-undefined">
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

**if** (*format == formatspecs[i].specifier)

{

count += formatspecs[i].print_func(args);

found_specifier = **1**;

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
The `_printf` function returns the number of characters printed. If any error occurs, a negative value is returned.
</code></pre>

