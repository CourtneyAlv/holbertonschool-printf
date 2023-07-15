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
<p><strong>int</strong> _printf(<strong>const</strong>  <strong>char</strong> *format, …)</p>
<p>{</p>
<p><strong>unsigned</strong>  <strong>int</strong> i;</p>
<p><strong>int</strong> count = <strong>0</strong>, found_specifier = <strong>0</strong>;</p>
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
<p><strong>if</strong> (*format == formatspecs[i].specifier)</p>
<p>{</p>
<p>count += formatspecs[i].print_func(args);</p>
<p>found_specifier = <strong>1</strong>;</p>
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
<p>The <code>_printf</code> function returns the number of characters printed. If any error occurs, a negative value is returned.<br>
</p>
<h4 id="compilation-process">Compilation Process</h4>
<pre><code>gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
</code></pre>

