# DCA
En la practica he implementado un codigo de prueba de una calculadora, he implementado funcion por funcion haciendo un commit a cada una con el alias git a para hacer git add . y el alias git co "añadido X" donde X es la funcion añadida que hace git commit -m.

Para añadir estos alias he usado los comandos
$ git config --global alias.a 'add .'

Y el comando

git config --global alias.co 'commit -m'




una vez añadidas varias funcionalidades hice git bisect start para comprobar donde esta el error resultante de hacer una division entre 0

la hacer git bisect start lo siguiente es git bisect bad ya que la head tiene ese error, luego git bisect good ce20b8736b8f84f1905b029bb6cc244958455851 ya que el primer commit no hay errores. Me envia al commit de la multiplicacion que compruebo y veo que esta bien y hago git bisect good, me envia al commit de la raiz donde ya esta presente el fallo , hago git bisect bad y me envia al commit de la division. Vuelvo a probar que falle, hago git bisect bad y me devuelve el siguiente mensaje

328107f81177c800a0336d668678fa6c8fb4add8 is the first bad commit
commit 328107f81177c800a0336d668678fa6c8fb4add8
Author: Rafael Vicente Llorca Cortes <rvlc1@alu.ua.es>
Date:   Fri Dec 23 21:02:52 2022 +0100

    añadido division

 calculadora.cc | 5 +++--
 1 file changed, 3 insertions(+), 2 deletions(-)

hago git bisect reset, modifico el error  y lo subo corregido