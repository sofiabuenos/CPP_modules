
assignment operator: evita auto atribuição. se eu nao estou querendo atribuir de mim. para mim mesmo -- comparamos endereços e nao o conteúdo em si
por isso é que fazemos:
this == &assign → compara endereços (auto-atribuição)
e nao o seguinte:
*this == assign → compara valores (conteúdo dos objetos)
