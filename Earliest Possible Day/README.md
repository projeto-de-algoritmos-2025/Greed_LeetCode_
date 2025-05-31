# [Non-overlapping Intervals](https://leetcode.com/problems/earliest-possible-day-of-full-bloom/description)

Você tem n sementes de flores. Cada semente deve ser plantada primeiro antes de começar a crescer e depois florescer. Plantar uma semente leva tempo e o mesmo acontece com o crescimento de uma semente. Você recebe duas matrizes inteiras indexadas em 0, plantTime e growTime, de comprimento n cada:

- plantTime[i] é o número de dias completos que você leva para plantar a i-ésima semente. Todos os dias, você pode trabalhar no plantio de exatamente uma semente. Você não precisa trabalhar no plantio da mesma semente em dias consecutivos, mas o plantio de uma semente não está completo até que você tenha trabalhado plantTime[i] dias no plantio no total.

- growTime[i] é o número de dias completos que a i-ésima semente leva para crescer depois de ser completamente plantada. Após o último dia de crescimento, a flor desabrocha e permanece florida para sempre.

A partir do início do dia 0, você pode plantar as sementes em qualquer ordem.

Retorne o mais cedo possível quando todas as sementes estiverem florescendo.

## Screenshots

### Caso 1

![Case1](/Earliest%20Possible%20Day/assets/img/caso1.png)

### Caso 2

![Case2](/Earliest%20Possible%20Day/assets/img/caso2.png)

### Caso 3

![Case3](/Earliest%20Possible%20Day/assets/img/caso3.png)

### Submissão

![Submission](/Earliest%20Possible%20Day/assets/img/submissao.png)
