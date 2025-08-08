# Changelog

Todas as mudanças notáveis neste projeto serão documentadas neste arquivo.

O formato é baseado em [Keep a Changelog](https://keepachangelog.com/pt-BR/1.0.0/),
e este projeto adere ao [Versionamento Semântico](https://semver.org/lang/pt-BR/).

## [2.0.0] - 2024-12-19

### Adicionado
- **Projeto Prático ESP32**: Sistema completo de IoT
  - Conectividade Wi-Fi integrada
  - Comunicação MQTT com broker HiveMQ
  - Monitoramento de potenciômetro em tempo real
  - Indicadores visuais de status (Wi-Fi e MQTT)
  - Transmissão de dados via tópico MQTT personalizado

- **Projetos Wokwi ESP32**: Simulações avançadas
  - **Conexão Wi-Fi**: Configuração e teste de conectividade
  - **Controle de LED por Potenciômetro**: Controle remoto de atuadores
  - **Envio de Dados**: Transmissão de dados do potenciômetro via MQTT

### Características
- Implementação completa de conectividade IoT
- Protocolo MQTT para comunicação em tempo real
- Debugging via Serial Monitor
- Código otimizado para ESP32
- Documentação completa dos projetos

### Tecnologias
- ESP32 Development Board
- Biblioteca WiFi para conectividade
- Biblioteca PubSubClient para MQTT
- Arduino IDE para desenvolvimento
- Wokwi para simulação

## [1.5.0] - 2024-12-18

### Adicionado
- **Projeto Físico-Química**: Otimização de energia
  - Display LCD I2C para exibição de informações
  - Otimização de consumo energético
  - Código comentado explicando as melhorias
  - Versão original e otimizada incluídas

- **Projetos Tinkercad**: Atividades 6-17
  - Projetos progressivos de complexidade crescente
  - Atividade 10 com servo motor
  - Circuitos básicos a intermediários
  - Documentação em arquivos .brd

### Características
- Foco em eficiência energética
- Uso de bibliotecas externas (Wire, LiquidCrystal_I2C)
- Simulação em ambiente virtual
- Progresão de aprendizado estruturada

## [1.0.0] - 2024-12-17

### Adicionado
- **Assistente de Garagem**: Projeto completo com sensor ultrassônico
  - Sensor HC-SR04 para medição de distância
  - Sistema de LEDs indicadores (verde, amarelo, vermelho)
  - Buzzer para alertas sonoros
  - Detecção de movimento e parada
  - Código comentado e bem estruturado

- **Projeto Wokwi Atividade 5**: Uso de bibliotecas externas
  - Implementação de bibliotecas específicas
  - Arquivo libraries.txt para dependências
  - Diagrama JSON para simulação
  - Documentação completa do projeto

### Características
- Código C++ bem documentado
- Uso de sensores e atuadores
- Simulação em ambiente Wokwi
- Estrutura de projeto organizada

### Tecnologias
- Arduino UNO R3
- Sensor ultrassônico HC-SR04
- LEDs e buzzer
- Biblioteca Wire para I2C
- Wokwi para simulação

## [0.9.0] - 2024-12-16

### Adicionado
- **Estrutura Base do Projeto**: Organização inicial
  - Pasta Arduinos para projetos Arduino
  - Pasta ESP32 para projetos ESP32
  - Subdivisão por plataformas (Tinkercad, Wokwi)
  - Estrutura de nomenclatura consistente

### Características
- Organização clara de projetos
- Separação por tecnologias
- Estrutura escalável
- Nomenclatura padronizada

## [0.8.0] - 2024-12-15

### Adicionado
- **Configuração Inicial**: Setup do ambiente
  - Arduino IDE configurado
  - Bibliotecas básicas instaladas
  - Estrutura de pastas criada
  - Primeiros testes de hardware

### Características
- Ambiente de desenvolvimento configurado
- Bibliotecas essenciais instaladas
- Estrutura de projeto definida
- Documentação inicial

## [0.7.0] - 2024-12-14

### Adicionado
- **Primeiros Projetos Arduino**: Fundamentos básicos
  - Controle de LEDs
  - Leitura de sensores básicos
  - Estrutura setup() e loop()
  - Comunicação serial

### Características
- Código C++ básico
- Estrutura Arduino padrão
- Comentários explicativos
- Debugging via Serial

## [0.6.0] - 2024-12-13

### Adicionado
- **Introdução ao ESP32**: Primeiros passos
  - Configuração básica do ESP32
  - Testes de conectividade Wi-Fi
  - Estrutura de projeto ESP32
  - Documentação inicial

### Características
- Configuração ESP32
- Testes de Wi-Fi
- Estrutura de projeto
- Documentação básica

## [0.5.0] - 2024-12-12

### Adicionado
- **Configuração do Repositório**: Estrutura inicial
  - Criação do repositório Git
  - Estrutura de pastas básica
  - Arquivos de documentação
  - Configuração inicial

### Características
- Repositório Git configurado
- Estrutura de projeto definida
- Documentação inicial
- Configuração básica

## [0.4.0] - 2024-12-11

### Adicionado
- **Planejamento do Projeto**: Definição de escopo
  - Objetivos do projeto IoT
  - Tecnologias a serem utilizadas
  - Estrutura de aprendizado
  - Cronograma de desenvolvimento

### Características
- Planejamento estruturado
- Objetivos definidos
- Tecnologias selecionadas
- Cronograma estabelecido

## [0.3.0] - 2024-12-10

### Adicionado
- **Início do Projeto**: Conceituação
  - Definição do tema IoT
  - Seleção de tecnologias
  - Planejamento de atividades
  - Estrutura educacional

### Características
- Conceito definido
- Tecnologias selecionadas
- Estrutura educacional
- Planejamento inicial

## [0.2.0] - 2024-12-09

### Adicionado
- **Preparação**: Ambiente de desenvolvimento
  - Instalação do Arduino IDE
  - Configuração de bibliotecas
  - Preparação de hardware
  - Documentação inicial

### Características
- Ambiente configurado
- Bibliotecas instaladas
- Hardware preparado
- Documentação básica

## [0.1.0] - 2024-12-08

### Adicionado
- **Criação do Repositório**: Início do projeto
  - Criação do repositório no GitHub
  - Estrutura inicial de pastas
  - Arquivos de documentação básicos
  - Configuração inicial do Git

### Características
- Repositório criado
- Estrutura básica
- Documentação inicial
- Configuração Git

---

## Tipos de Mudanças

- **Adicionado** para novas funcionalidades
- **Alterado** para mudanças em funcionalidades existentes
- **Descontinuado** para funcionalidades que serão removidas em breve
- **Removido** para funcionalidades removidas
- **Corrigido** para correções de bugs
- **Segurança** para vulnerabilidades corrigidas

## Convenções de Versionamento

- **MAJOR.MINOR.PATCH** (ex: 2.0.0)
- **MAJOR**: Mudanças incompatíveis com versões anteriores
- **MINOR**: Novas funcionalidades compatíveis
- **PATCH**: Correções de bugs compatíveis

## Notas de Lançamento

Cada versão inclui:
- Descrição detalhada das mudanças
- Tecnologias utilizadas
- Características implementadas
- Melhorias e correções