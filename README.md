# cross_compiler
La compilation croisée fait donc référence aux chaînes de compilation
capables de traduire un code source en code objet dont l’architecture
processeur diffère de celle où la compilation est effectuée. Ces chaînes sont
principalement utilisés en informatique industrielle et dans les systèmes
embarqués

## Contents
+ [Introduction](#cross_compiler)
+ [gestion des étudiants en langage c](#gestion-des-étudiants-en-langage-c)
+ [Préparation du Toolchain](#Préparation-du-Toolchain)
+ [normal compiler](#normal-compiler)
+ [cross compiler](#cross-compiler)

## gestion des étudiants en langage c
<a href="https://github.com/hamzaelmoudden/cross_compiler/tree/main/Code%20source" target="_blank">Code Source</a>
## Préparation du Toolchain
   - Ubunto :
   >
        
        sudo apt install binutils-arm-linux-gnueabi
        
   <a href="https://github.com/hamzaelmoudden/cross_compiler/blob/main/Assets/tool.png" target="_blank"><img src="Assets/tool.png" alt="Browser Stack" ></a>     
  

## normal compiler
   - compile using command :
   >
       gcc "name_file".c
   
   <a href="https://github.com/hamzaelmoudden/cross_compiler/blob/main/les%20fichiers%20ex%C3%A9cutables/ubunto.out" target="_blank">Le fichier exécutable compilé pour l’architecture x86-64 </a>
  - Vérification:
  
   <a href="https://github.com/hamzaelmoudden/cross_compiler/blob/main/Assets/normal.png" target="_blank"><img src="Assets/normal.png" alt="Browser Stack" ></a>  
## cross compiler
   - compile using Toolchain :
   >
       arm-linux-gnueabi-gcc "name_file".c

  <a href="https://github.com/hamzaelmoudden/cross_compiler/blob/main/les%20fichiers%20ex%C3%A9cutables/arm.out" target="_blank">Le fichier exécutable compilé pour l’architecture ARM </a>
  - Vérification:
  
   <a href="https://github.com/hamzaelmoudden/cross_compiler/blob/main/Assets/cross.png" target="_blank"><img src="Assets/cross.png" alt="Browser Stack" ></a>  
   

*[top↑](#cross_compiler)*   
