#ifndef NODE_H
#define NODE_H

// Node.h define a estrutura do nó da matriz esparsa

struct Node {

  Node *direita; // Próximo elemento na mesma linha
  Node *abaixo; // Próximo elemento na mesma coluna
  int linha, coluna; 
  double valor;

  // Construtor:
  Node(int linha, int coluna, double valor)
    : direita{this}, abaixo{this}, linha{linha}, coluna{coluna}, valor{valor}
    // Direita e abaixo recebem eles mesmos(this), apontando para o próprio nó (indicando que, inicialmente, forma-se uma lista circular para eles mesmo)
  {}
};

#endif

