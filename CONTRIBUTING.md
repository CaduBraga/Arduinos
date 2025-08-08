# Guia de Contribuição

Obrigado por considerar contribuir para este projeto educacional de Programação Front End!

## Como Contribuir

### 1. Fork e Clone

1. Faça um fork deste repositório
2. Clone o fork para sua máquina local:
   ```bash
   git clone https://github.com/CaduBraga/programacao-front-end.git
   ```

### 2. Crie uma Branch

Crie uma branch para sua contribuição:
```bash
git checkout -b feature/nova-funcionalidade
```

### 3. Desenvolva

- Mantenha o código limpo e bem documentado
- Siga os padrões de nomenclatura HTML/CSS/JavaScript
- Adicione comentários explicativos quando necessário
- Teste seu código em diferentes navegadores
- Mantenha a responsividade dos layouts

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

### HTML
- Use tags semânticas apropriadas
- Mantenha a estrutura hierárquica clara
- Use atributos alt em imagens
- Mantenha a acessibilidade em mente

### CSS
- Use nomes de classes descritivos
- Organize propriedades em ordem lógica
- Use variáveis CSS para cores e valores reutilizáveis
- Mantenha especificidade baixa
- Use Flexbox e Grid para layouts

### JavaScript
- Use camelCase para variáveis e funções
- Use PascalCase para classes
- Use UPPER_CASE para constantes
- Mantenha funções pequenas e focadas

### Estrutura de Projetos
```
projeto/
├── index.html
├── pages/
│   └── outras-paginas.html
├── assets/
│   ├── images/
│   ├── fonts/
│   └── videos/
├── styles/
│   └── style.css
└── README.md
```

### Comentários
```html
<!-- Seção de navegação principal -->
<nav class="main-nav">
    <!-- Links de navegação -->
</nav>
```

```css
/* Estilos para o cabeçalho */
.header {
    /* Propriedades de layout */
    display: flex;
    justify-content: space-between;
    
    /* Propriedades visuais */
    background-color: var(--primary-color);
    padding: 1rem;
}
```

```javascript
/**
 * Função para validar formulário
 * @param {HTMLFormElement} form - Elemento do formulário
 * @returns {boolean} - Retorna true se válido
 */
function validateForm(form) {
    // Lógica de validação
}
```

## Tipos de Contribuição

### 🐛 Correção de Bugs
- Descreva o bug claramente
- Inclua passos para reproduzir
- Teste em diferentes navegadores
- Adicione screenshots se necessário

### ✨ Novas Funcionalidades
- Explique a funcionalidade proposta
- Mantenha consistência com o design existente
- Adicione documentação
- Teste a responsividade

### 📚 Melhorias na Documentação
- Corrija erros de gramática
- Adicione exemplos de uso
- Melhore a clareza das instruções
- Atualize screenshots se necessário

### 🎨 Melhorias de Design
- Refatore CSS existente
- Melhore a responsividade
- Adicione animações suaves
- Mantenha a acessibilidade

## Processo de Review

1. **Análise de Código**: Seu código será revisado
2. **Testes**: Verifique se funciona em diferentes navegadores
3. **Responsividade**: Teste em diferentes tamanhos de tela
4. **Documentação**: Atualize documentação se necessário
5. **Merge**: Após aprovação, será mergeado

## Código de Conduta

- Seja respeitoso e construtivo
- Ajude outros desenvolvedores
- Mantenha o foco educacional do projeto
- Reporte problemas de forma profissional
- Respeite as diretrizes de acessibilidade

## Contato

Para dúvidas ou sugestões:
- Abra uma issue no GitHub
- Entre em contato com o autor

---

**Obrigado por contribuir para o aprendizado mútuo!** 🎓