Desafio de Movimentos de Xadrez - C ♟️💻
Este repositório contém a implementação de um projeto de xadrez em C, desenvolvido como parte de um desafio de programação. O projeto simula os movimentos de várias peças de xadrez em um tabuleiro. O desafio foi dividido em três níveis, cada um com um grau crescente de complexidade. A seguir, você encontrará uma explicação de cada nível e como testar os movimentos das peças. 🚀

Níveis do Desafio
🟢 Nível Novato 👶
Neste nível, você irá simular o movimento das peças Torre, Bispo e Rainha usando estruturas de repetição (loops). O objetivo é aplicar o conhecimento básico sobre o uso de loops como for, while e do-while para controlar o movimento das peças. ⚙️

O que foi feito:
Torre: Move-se 5 casas para a direita ➡️.

Bispo: Move-se 5 casas na diagonal (cima, direita) ↗️.

Rainha: Move-se 8 casas para a esquerda ⬅️.

Como testar:
Compile o código:
gcc xadrez.c -o xadrez

Execute o programa:
./xadrez

Você verá a impressão dos movimentos das peças na tela: Movimento da Torre: Direita ➡️
Direita ➡️
Direita ➡️
Direita ➡️
Direita ➡️

Movimento do Bispo:
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️

Movimento da Rainha:
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️

🟡 Nível Aventureiro 🏰
Neste nível, você aprimorará o movimento das peças, adicionando o Cavalo ao jogo 🐴. O Cavalo se move em "L", e a implementação exige o uso de loops aninhados para simular esse movimento. 🔄

O que foi feito:
Cavalo: Move-se 2 casas para baixo e 1 para a esquerda (movimento em "L").

Como testar:
Compile o código:
gcc xadrez.c -o xadrez

Execute o programa:
./xadrez

Você verá a impressão dos movimentos das peças, incluindo o movimento do Cavalo: Movimento do Cavalo:
Baixo ⬇️
Baixo ⬇️
Esquerda ⬅️

🔴 Nível Mestre 🏆
No nível mestre, você aplica recursividade e loops complexos para controlar o movimento das peças. A recursividade é usada para a Torre, Bispo e Rainha, enquanto o movimento do Cavalo é aprimorado com loops aninhados complexos. 🧠💥

O que foi feito:
Recursividade: As funções que controlam os movimentos da Torre, Bispo e Rainha foram modificadas para usar recursão 🔁.

Loops Complexos: O movimento do Cavalo foi aprimorado com loops aninhados e múltiplas condições 🔄.

Como testar:
Compile o código:
gcc xadrez.c -o xadrez

Execute o programa:
./xadrez

Você verá a impressão dos movimentos das peças, incluindo o movimento aprimorado do Cavalo com loops complexos: Movimento da Torre:
Direita ➡️
Direita ➡️
Direita ➡️
Direita ➡️
Direita ➡️

Movimento do Bispo:
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️
Cima Direita ↗️

Movimento da Rainha:
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️
Esquerda ⬅️

Movimento do Cavalo:
Cima ⬆️
Cima ⬆️
Direita ➡️

🖥️ Tecnologias Utilizadas 💡
Linguagem: C

Compilador: GCC 🚀

⚠️ Nota Importante 📢
Professor, fique à vontade para me orientar em pontos negativos ou melhorias no código. Qualquer sugestão para aprimorar a implementação será muito bem-vinda. Agradeço pelo acompanhamento e feedback! 🙏
