# simple-helloWorld-in-C

Acest proiect este realizat in limbajul **C**, folosind **GTK3** pentru interfata grafica si **Cairo** pentru desenare.

Aplicatia deschide o fereastra cu fundal **Dark Mode** si afiseaza mesajul **„Hello World!”** intr-o culoare **Neon Cyan**.

Textul ramane mereu centrat, chiar daca fereastra este redimensionata, deoarece pozitia lui se calculeaza automat.

Proiectul poate fi compilat in doua moduri:

* cu **Makefile**
* cu **CMake**

Pentru rulare ai nevoie de:

* `gcc`
* `libgtk-3-dev`
* `cmake`

### Rulare rapida

`make`
`./linux_world_app`

Pentru stergerea fisierelor generate:

`make clean`
