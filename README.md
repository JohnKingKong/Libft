# 42-Libft

Personnal standard library, made for the first 42 project, filled to the brim with useful functions.

## Description

At 42, we aren't allowed to use basic functions, without implementing it first, which mean the first project is to build our very own library, full of functions that copies the behavior of already implemented functions, plus a few more designed from scratch. This library contains functions as simple as strlen or putchar and as complicated as ft_split or ft_itoa. All of the mandatory, aswell as the bonus functions have been done, for a grand total of 125/100.
This library will more than likely be updated as I'm going through my cursus, as I'll be allowed to implement it in future projects.

## Getting Started

### Dependencies

* No real dependencies, apart common and standard libraries (ex: stdef.h, string.h, ctype.h, etc)
* I used, as many others (and suggest you do so), some testers to verify the validity of the functions \
Testers such as : [libft-Tester](https://github.com/Tripouille/libftTester) by [Tripouile](https://github.com/Tripouille) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[libft-Unit-Tester](https://github.com/alelievr/libft-unit-test) by [Antoine Lelievre](https://github.com/alelievr) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[libft-war-machine](https://github.com/ska42/libft-war-machine) by [ska42](https://github.com/ska42)

### Installing

* Clone the repo wherever you want the library to be. 
```markdown 
git clone git@github.com:JohnKingKong/Libft.git
```

### Executing program

* There is a Makefile, with rules like ```make all```, ```make clean```, ```make fclean```, ```make bonus``` and ```make re```. The ```make bonus``` rule allows you to compile the bonus functions aswell as the mandatory ones. The Makefile is instructed to compile with ```GCC``` appending ```-Wall, -Werror and -Wextra``` as flags.

* You can get rid of the ".o" afterwards, using ```make clean``` or ```make fclean```, to get rid of the "libft.a" aswell.

## Help

* If any problem is encountered during the compiling, be aware these functions were written and used on a Mac. which can influence the compiling. I know some functions doesn't compile in Windows environment, but I'm pretty sure Linux can handle all of em just fine.

## Authors

Contributors names and contact info

Jean-René Vigneault
<jeanre002@gmail.com>, <jvigneau@student.42quebec.fr>
IG : @wutsthat

## Version History

* 0.2
  * 0.2.1
    * Added more functions, useful for printf, aswell as the .pdf for the subject, both in french and english.
* 0.1
  * 0.1.2
      * Commit with bonus functions
  * 0.1.1
      * First Commit without bonus functions

## License

Feel free to use as a reference or to clone the repo. Be sure to understand what you use tho, and be sure to credit authors of stuff you use in your projects.
