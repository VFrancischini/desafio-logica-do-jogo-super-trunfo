# Desafio Super Trunfo - Países - Lógica do jogo

Este desafio é uma continuação do desafio do tema anterior, onde você desenvolveu o cadastro das cartas.

**Desafio anterior:** https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-VFrancischini


## 🎮 Nível Novato: Comparar duas cartas

Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.


## 🛡️ Nível Aventureiro: Interatividade no Super Trunfo

Você implementará um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, você usará estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo.

🚩 **Objetivo:**

**Comparação de Atributos:** Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:

* Nome do país (`string` - usado apenas para exibir informações, não para comparação direta)
* População (`int`)
* Área (`float`)
* PIB (`float`)
* Número de pontos turísticos (`int`)
* Densidade demográfica (`float` - já calculada no desafio anterior).

**Regras de Comparação:** A regra geral é: vence a carta com o <u>maior</u> valor no atributo escolhido. Porém, para a <u>Densidade Demográfica</u>, a regra inverte: vence a carta com o <u>menor</u> valor.

**Exibição do Resultado:** Mostrar na tela, de forma clara, o resultado da comparação, incluindo:

* O nome dos dois países.
* O atributo usado na comparação.
* Os valores do atributo para cada carta.
* Qual carta venceu.
* Em caso de empate, exibir a mensagem "Empate!".


## 🏆 Nível Mestre: Comparações Avançadas com Atributos Múltiplos

Agora você integrará tudo o que aprendeu sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada. Você permitirá que o jogador escolha <u>dois atributos</u> para comparar as cartas de países, implementará menus dinâmicos com switch e usará o operador ternário para tornar seu código mais elegante. Este desafio é a culminação dos desafios anteriores, onde você cadastrou as cartas e implementou a comparação com um único atributo.

🚩 **Objetivo:**

**Escolha de Dois Atributos:** O sistema deve permitir que o jogador escolha <u>dois atributos numéricos diferentes</u> para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.

**Comparação com Múltiplos Atributos:** Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o <u>maior</u> valor. A exceção continua sendo a <u>Densidade Demográfica</u>, onde vence a carta com o <u>menor</u> valor.

**Soma dos Atributos:** Após comparar os dois atributos individualmente, o sistema deve <u>somar os valores</u> dos atributos para cada carta. A carta com a <u>maior soma</u> vence a rodada.

**Tratamento de Empates:** Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".

**Menus Dinâmicos:** Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.

**Exibição Clara do Resultado:** Mostre o resultado da comparação de forma clara e organizada, incluindo:

* O nome dos dois países.
    
* Os dois atributos usados na comparação.
    
* Os valores de cada atributo para cada carta.
    
* A soma dos atributos para cada carta.
    
* Qual carta venceu (ou se houve empate).
