# Projetos Arduino e ESP32 - IoT

Este repositório contém uma coleção abrangente de projetos práticos desenvolvidos durante a Unidade Curricular (UC) de Internet das Coisas (IoT), abrangendo desde projetos básicos com Arduino UNO R3 até projetos avançados com ESP32.

## 🎯 Objetivo

O principal objetivo deste repositório é fornecer uma experiência prática completa em IoT, desde conceitos básicos de eletrônica e programação até projetos avançados com conectividade Wi-Fi e comunicação MQTT. Os projetos foram desenvolvidos para demonstrar a integração de dispositivos físicos ao mundo digital, permitindo monitoramento, automação e controle remoto de sistemas.

## 🚀 Por que isso é importante?

A Internet das Coisas (IoT) representa a próxima revolução tecnológica, conectando dispositivos físicos à internet para criar sistemas inteligentes e autônomos. Este repositório oferece:

- **Experiência Prática**: Projetos hands-on com componentes reais
- **Progresão de Conhecimento**: Do básico ao avançado
- **Tecnologias Modernas**: Arduino, ESP32, Wi-Fi, MQTT
- **Aplicações Reais**: Sensores, atuadores, displays, comunicação
- **Base Sólida**: Fundamentos essenciais para IoT

## 📁 Estrutura do Projeto

```
Arduinos/
├── Projeto físico-química/          # Projetos específicos de física e química
│   ├── economia_de_energia.ino     # Otimização de consumo energético
│   └── original.ino                # Versão original do projeto
├── tinkercard/                     # Projetos desenvolvidos no Tinkercad
│   ├── atividade 6.brd             # Projetos básicos (6-17)
│   ├── atividade 7.brd
│   ├── atividade 8.brd
│   ├── atividade 9.brd
│   ├── atividade 10.brd
│   ├── atividade 10 - servo.brd    # Controle de servo motor
│   ├── atividade 11.brd
│   ├── atividade 12.brd
│   ├── atividade 13.brd
│   ├── atividade 14.brd
│   ├── atividade 16.brd
│   └── atividade 17.brd
└── wokwi/                          # Projetos desenvolvidos no Wokwi
    ├── atividade 1/                # Assistente de garagem com sensor ultrassônico
    │   ├── diagram.json
    │   ├── sketch.ino
    │   └── wokwi-project.txt
    └── atividade 5/                # Projeto com bibliotecas externas
        ├── diagram.json
        ├── libraries.txt
        ├── sketch.ino
        └── wokwi-project.txt

ESP32/
├── Projeto prático/                # Projeto final com ESP32
│   └── atividadePratica.ino       # Sistema completo com Wi-Fi e MQTT
└── Wokwi/                         # Projetos ESP32 no Wokwi
    ├── conexao Wi-Fi/             # Configuração e teste de Wi-Fi
    ├── controle de led por potenciometro/  # Controle remoto
    └── envio de dados - potenciômetro/    # Transmissão de dados
```

## 🔧 Tecnologias Utilizadas

### Hardware
- **Arduino UNO R3**: Microcontrolador principal para projetos básicos
- **ESP32**: Microcontrolador com Wi-Fi integrado para projetos avançados
- **Sensores**: Ultrassônico, potenciômetro, temperatura, etc.
- **Atuadores**: LEDs, servo motores, buzzer, display LCD
- **Componentes**: Resistores, capacitores, breadboards

### Software
- **Arduino IDE**: Ambiente de desenvolvimento
- **C++**: Linguagem de programação principal
- **Bibliotecas**: Wire, LiquidCrystal_I2C, WiFi, PubSubClient
- **Plataformas**: Tinkercad, Wokwi para simulação

### Comunicação
- **Wi-Fi**: Conectividade sem fio
- **MQTT**: Protocolo de comunicação IoT
- **Serial**: Comunicação local para debug

## 📋 Projetos Incluídos

### Arduino UNO R3
1. **Assistente de Garagem** (Atividade 1): Sistema de detecção de distância com LEDs indicadores
2. **Projeto Físico-Química**: Otimização de consumo energético com display LCD
3. **Atividades 6-17**: Projetos progressivos no Tinkercad
4. **Projeto com Bibliotecas** (Atividade 5): Uso de bibliotecas externas

### ESP32
1. **Conexão Wi-Fi**: Configuração e teste de conectividade
2. **Controle Remoto**: Controle de LED via potenciômetro
3. **Transmissão de Dados**: Envio de dados do potenciômetro via MQTT
4. **Projeto Prático**: Sistema completo com Wi-Fi, MQTT e indicadores visuais

## 🛠️ Como Utilizar

### Pré-requisitos
- Arduino IDE instalado
- Bibliotecas necessárias (Wire, LiquidCrystal_I2C, WiFi, PubSubClient)
- Hardware correspondente (Arduino UNO R3, ESP32, componentes)

### Executando os Projetos

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/CaduBraga/Arduinos.git
   ```

2. **Abra o Arduino IDE**

3. **Carregue o projeto desejado**:
   - Navegue até a pasta do projeto
   - Abra o arquivo `.ino`
   - Conecte o hardware
   - Faça upload do código

4. **Para projetos Wokwi/Tinkercad**:
   - Acesse as plataformas online
   - Importe os arquivos de diagrama
   - Execute a simulação

### Configuração ESP32
```cpp
// Exemplo de configuração Wi-Fi
const char* ssid = "SUA_REDE_WIFI";
const char* password = "SUA_SENHA";
const char* mqtt_server = "broker.hivemq.com";
```

## 📚 Aprendizados

### Conceitos Básicos
- Estrutura de programação Arduino
- Controle de pinos digitais e analógicos
- Uso de sensores e atuadores
- Comunicação serial

### Conceitos Avançados
- Conectividade Wi-Fi
- Protocolo MQTT
- Bibliotecas externas
- Otimização de código
- Debugging e troubleshooting

## 🤝 Contribuindo

Este repositório é parte de um projeto educacional. Contribuições são bem-vindas! Veja o arquivo [CONTRIBUTING.md](CONTRIBUTING.md) para detalhes sobre como contribuir.

## 📄 Licença

Este projeto está licenciado sob a Licença Educacional do CentroWeg. Veja o arquivo [LICENSE](LICENSE) para detalhes.

## 📖 Documentação Adicional

- [CHANGELOG.md](CHANGELOG.md) - Histórico de versões
- [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) - Código de conduta
- [CONTRIBUTING.md](CONTRIBUTING.md) - Guia de contribuição

## 👨‍💻 Autor

**Carlos Eduardo Braga**
- Estudante do curso de Desenvolvimento de Sistemas
- CentroWeg - Turma MIDS 77
- Professor: Kristian Erdmann

## 📞 Contato

- **Email**: carlos_e_braga@estudante.sesisenai.org.br
- **GitHub**: [CaduBraga](https://github.com/CaduBraga)

---

**Desenvolvido com ❤️ para o aprendizado de IoT!** 🚀
