*Implementação*

Para armazenar o grafo, você pode usar uma lista de adjacências ou até mesmo um vetor de
adjacências (para simplificar o percurso). Não utilize matrizes de adjacência ou incidência pois
ocupam muito espaço em memória e tornam o algoritmo muito lento. Também não utilize
estruturas de dados prontas (em pacotes) para armazenar o grafo.
O programa deve ser inteiramente codificado pelo aluno sem auxílio de nenhuma ferramenta
de geração de código. Seu programa deverá processar a linha de comando, executar o que se pede, imprimindo a
saída esperada e terminar.

*Linguagem e Execução*

Seu programa deve ser implementado em C, C++ ou Python. Deve se chamar pccm.c, pccm.cpp
ou pccm.py.
Ele será compilado e executado em uma máquina x86_64 (amd64) em Debian Linux 12.5,como
as máquinas dos laboratórios da Facom.
Para os dois primeiros casos, ele será compilado com gcc versão 12.2.0 usando o comando:
gcc -std=c11 -Wall -o pccm *.c
ou
g++ -std=c++20 -Wall -o pccm *.cpp
Para o terceiro caso, será executado com Python 3.11.2 com:

_Entrada e Saída_

A linha de comando será como:
./pccm grafo.txt s
ou
./python3 pccm.py grafo.txt s
O programa deve ler o grafo do arquivo grafo.txt e executar o algoritmo solicitado com
origem em s até todos os destinos.
No início de cada iteração (de 1 a no máximo m(G)), imprima:
O k v1v2 . . . vn
A ordem de análise dos vértices na k-ésima iteração será v1, v2, . . . , vn.
Ao final da última análise, avalie o estado final e determine se existe um ciclo negativo no
grafo.
Caso exista um ciclo negativo imprima a linha abaixo e termine o programa.
C
Se você tiver implementado a identificação do ciclo, imprima:
C v n v1v2 . . . vnv1
Nesta linha v é o custo do ciclo, n é número de vértices e v1v2 . . . vnv1 são os vértices do
ciclo na ordem dos arcos (incluindo a repetição do vértice v1), iniciando pelo vértice de menor
número.
Caso não haja um ciclo negativo, imprima, para todos os vértices (incluindo o próprio s) em
ordem numérica, uma linha contendo:
Caso tenha encontrado o caminho de custo mínimo de s até t:
P t v c v1v2 . . . vn
A linha apresenta as informações do menor caminho de s para t: o valor (v), o comprimento
(c) e o caminho em si (sequência de vértices: v1v2 . . . vn, sendo s = v1 e vn = t).
Ou apenas
P t v
Caso você não tenha implementado a identificação do caminho.
Caso não exista caminho de s a t:
U t

Caso ocorra algum problema na especificação do grafo ou do vértice de origem, imprima
uma linha contendo:
E

*Sobre o grafo*

O grafo é simples, ou seja, não possui laços ou arestas múltiplas, não terá mais de 106 vértices
nem mais de 107 arcos. O custo de cada arco será entre -1.000 e +1.000, podendo ser 0.
O arquivo que representa o grafo está no formado descrito abaixo:
I n m
N i g- g+
E i j c
T
O propósito das linhas são identificadas pelo caractere inicial.
A primeira linha é do tipo I e contém informações gerais do grafo: número de vértices e
número de arcos. Então há uma linha do tipo N para cada vértice contendo o número do vértice
de 0 a n-1 com o grau de entrada e o grau de saída. Por fim, há uma linha do tipo E para
cada arco do grafo, com o vértice de origem, vértice de destino e custo. O custo será sempre
um inteiro.