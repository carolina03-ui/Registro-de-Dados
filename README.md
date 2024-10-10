# 📋 Registro de Funcionários

Este projeto é um programa em C que implementa um sistema simples para gerenciar registros de funcionários. O código realiza as seguintes funções:

## Funcionalidades

1. **Definição da Estrutura de Dados**:
   - Utiliza uma `struct` chamada `Registro` que contém:
     - **Nome**: Armazena o nome do funcionário.
     - **Código do Crachá**: Um identificador único para o funcionário (tipo inteiro).
     - **Setor**: O setor onde o funcionário trabalha.

2. **Adicionar Registros**:
   - Permite que o usuário insira novos dados de funcionários.
   - Os dados são armazenados em um arquivo no formato binário, garantindo que múltiplos registros possam ser adicionados sem sobrescrever os existentes.

3. **Ler Registros**:
   - Lê todos os registros armazenados no arquivo e os exibe no console, mostrando o nome, código do crachá e setor de cada funcionário.

4. **Interação com o Usuário**:
   - Apresenta um menu interativo que permite ao usuário escolher entre adicionar novos registros ou visualizar registros existentes.
   - O programa continua em execução até que o usuário decida sair.

## Estrutura do Código

- O código é organizado em funções para modularidade:
  - **`adicionarRegistro`**: Função responsável por coletar dados do usuário e armazená-los no arquivo.
  - **`lerRegistros`**: Função que lê e exibe os registros armazenados.
  - **`main`**: Função principal que gerencia o fluxo do programa e a interação com o usuário.

## Arquivo de Dados

- Os registros são salvos em um arquivo chamado **`funcionarios.dat`**.

Este código fornece uma base para um sistema de gerenciamento de funcionários e pode ser expandido com funcionalidades adicionais conforme necessário.
