# Guia de Contribuição

Obrigado por considerar contribuir para este projeto educacional de Internet das Coisas (IoT) e desenvolvimento com Arduino/ESP32!

## Como Contribuir

### 1. Fork e Clone

1. Faça um fork deste repositório
2. Clone o fork para sua máquina local:
   ```bash
   git clone https://github.com/CaduBraga/Arduinos.git
   ```

### 2. Crie uma Branch

Crie uma branch para sua contribuição:
```bash
git checkout -b feature/nova-funcionalidade
```

### 3. Desenvolva

- Mantenha o código limpo e bem documentado
- Siga os padrões de nomenclatura Arduino/C++
- Adicione comentários explicativos quando necessário
- Teste seu código em hardware real quando possível
- Mantenha a segurança eletrônica em mente
- Documente circuitos adequadamente

### 4. Commit

Faça commits com mensagens descritivas:
```bash
git commit -m "Adiciona nova funcionalidade X"
```

### 5. Push e Pull Request

1. Faça push para sua branch:
   ```bash
   git push origin feature/nova-funcionalidade
   ```

2. Crie um Pull Request no GitHub

## Padrões de Código

### Arduino/ESP32
- Use nomes descritivos para variáveis e funções
- Mantenha a estrutura setup() e loop() clara
- Use comentários para explicar lógica complexa
- Organize bibliotecas no topo do arquivo
- Teste em diferentes condições

### Estrutura de Projetos
```
projeto/
├── sketch.ino
├── diagram.json          # Para projetos Wokwi
├── libraries.txt         # Lista de bibliotecas
├── README.md            # Documentação do projeto
├── components/          # Lista de componentes
└── images/             # Imagens do circuito
```

### Comentários
```cpp
// Configuração dos pinos
const int LED_PIN = 13;
const int SENSOR_PIN = A0;

// Função para ler sensor
int readSensor() {
    int value = analogRead(SENSOR_PIN);
    return map(value, 0, 1023, 0, 100);
}
```

### Bibliotecas
```cpp
// Inclusão de bibliotecas
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <WiFi.h>
#include <PubSubClient.h>
```

## Tipos de Contribuição

### 🐛 Correção de Bugs
- Descreva o bug claramente
- Inclua passos para reproduzir
- Teste em hardware real
- Adicione screenshots se necessário
- Verifique se não há problemas de segurança

### ✨ Novas Funcionalidades
- Explique a funcionalidade proposta
- Mantenha consistência com projetos existentes
- Adicione documentação completa
- Teste a funcionalidade adequadamente
- Considere implicações de segurança

### 📚 Melhorias na Documentação
- Corrija erros de gramática
- Adicione exemplos de uso
- Melhore a clareza das instruções
- Atualize diagramas se necessário
- Documente componentes utilizados

### 🔧 Melhorias de Circuitos
- Refatore circuitos existentes
- Melhore a eficiência energética
- Adicione proteções adequadas
- Mantenha a segurança
- Documente mudanças

### 📡 Projetos IoT
- Implemente conectividade segura
- Use protocolos adequados (MQTT, HTTP)
- Adicione autenticação quando necessário
- Teste em diferentes redes
- Documente configurações

## Processo de Review

1. **Análise de Código**: Seu código será revisado
2. **Testes**: Verifique se funciona em hardware real
3. **Segurança**: Teste aspectos de segurança eletrônica
4. **Documentação**: Atualize documentação se necessário
5. **Merge**: Após aprovação, será mergeado

## Diretrizes de Segurança

### Eletrônica
- Use componentes adequados para tensão/corrente
- Teste circuitos antes de conectar ao microcontrolador
- Use resistores de proteção quando necessário
- Verifique polaridade de componentes
- Trabalhe em ambiente seguro

### IoT
- Use protocolos seguros (MQTT com TLS, HTTPS)
- Implemente autenticação adequada
- Proteja dados sensíveis
- Teste conectividade em diferentes redes
- Documente configurações de rede

## Código de Conduta

- Seja respeitoso e construtivo
- Ajude outros desenvolvedores
- Mantenha o foco educacional do projeto
- Reporte problemas de forma profissional
- Respeite as diretrizes de segurança

## Estrutura de Nomenclatura

### Arquivos
- `sketch.ino` - Código principal Arduino
- `diagram.json` - Diagrama Wokwi
- `libraries.txt` - Lista de bibliotecas
- `README.md` - Documentação do projeto

### Variáveis e Funções
```cpp
// Constantes em MAIÚSCULAS
const int LED_PIN = 13;
const int SENSOR_PIN = A0;

// Funções em camelCase
void setupWiFi() {
    // Configuração Wi-Fi
}

// Variáveis descritivas
int sensorValue = 0;
bool isConnected = false;
```

## Contato

Para dúvidas ou sugestões:
- Abra uma issue no GitHub
- Entre em contato com o autor

---

**Obrigado por contribuir para o aprendizado mútuo de IoT!** 🔌⚡
