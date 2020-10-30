<p align="center">
  <img src="https://github.com/lacrisy21/README-stuff/blob/main/C%20.jpg" width="360"/>
 <h1 align="center">Simulated Printf function</h1>
 <br>
 </p>
</p>

This is our first colaborative project, doing peer programming and understanding how a variadic function, like Printf, work. 

---
### - Files in the Repository 🖇️

#|Directory|Description
---|---|---
1|[README.md](./README.md)| You are reading it
2|[_printf.c](./printf.c)| Printf function
3|[_putchar.c](./_putchar.c)| Function to print
4|[bytes.c](./bytes.c)| Aux function to count bytes
5|[format_num.c](./format_num.c)| Auxiliar function to map the format
6|[holberton.h](./holberton.h)| Header file with the structure and the prototypes of the functions
7|[man_3_printf](./man_3_printf)| man page of our function
8|[functions.c](./functions.c)| Standard functions to print based on the format case. 

## Description 🚀

The  function printf() produces output according to a format. It writes output to std‐
out, the standard output stream. 
Upon successful return, these functions return the number of characters printed  (excluding the null byte used to end output to strings). If an output error is encountered, a negative value is returned.

### -The conversion specifier

Specifier|Output|Format
---|---|---
c|Prints a single character|%c
s|Prints a string of characters|%s
d|Prints a signed decimal integer|%d
i|Prints a signed decimal integer|%i
%|Prints a symbol of percent|%%

## Deployment ⚙️

#### To print a single character:
```
        int main() 
        {
              char c = 'G';
              _printf("%c\n", c);
              return (0);
        }
```
#### To print a string:
```
        int main() 
        {
              char *str = 'Girl Power';
              _printf("%s\n", str);
              return (0);
        }
```
#### To print an integer:
```
        int main() 
        {
              int n = 13;
              _printf("%d\n", n);
              return (0);
        }
```
---


### Flowchart 🔩

<p align="center">
  <img src="https://github.com/lacrisy21/README-stuff/blob/main/flow.png" width="800"/>
 <h1 align="center">Simulated Printf function</h1>
 <br>
 </p>
</p>

## Built with 🛠️
 C programming Language
 Visual Studio Code
 For Holberton Schoool
 Cohort 13

## Autors ✒️

Check who contributed to this project [here](https://github.com/your/project/contributors)
😊
---
<p align="center">
  <h2 align="center">Made by:</h2>
    <h3 align="center">Laura Cristina Gil</h3>
      <p align="center">
        <a href="https://twitter.com/Laa_Titina" target="_blank">
            <img alt="twitter_page" src="https://github.com/lacrisy21/README-stuff/blob/main/twitter.png" style="float: center; margin-right: 10px" height="30" width="30">
        </a>
        <a href="https://www.linkedin.com/in/lcristinagil/" target="_blank">
            <img alt="linkedin_page" src="https://github.com/lacrisy21/README-stuff/blob/main/LinkedIn.png" style="float: center; margin-right: 10px" height="30"  width="30">
        </a>
      </p>
</p>
<p align="center">
    <h3 align="center">Katherin Gomez</h3>
      <p align="center">
        <a href="https://twitter.com/Katgo__" target="_blank">
            <img alt="twitter_page" src="https://github.com/lacrisy21/README-stuff/blob/main/twitter.png" style="float: center; margin-right: 10px" height="30" width="30">
        </a>
      </p>
</p>

<p align="center">
   <img src="https://www.holbertonschool.com/holberton-logo.png"
     alt="end"
     style="float: left; margin-right: 10px;">
</p>
<p align="center">
   <img src="https://github.com/lacrisy21/README-stuff/blob/main/Holbspooky.png"
     alt="spooky holberton"
     style="float: left; margin-right: 10px;">
</p>
<p align="center">
<b>Holberton School - Medellin, Colombia<b><br>
</p>
<p align="center">
<b>October, 2020 🎃 <b>
</p>
