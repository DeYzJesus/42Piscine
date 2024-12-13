/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerma-b <jmerma-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:24:09 by jmerma-b          #+#    #+#             */
/*   Updated: 2024/12/12 18:15:21 by jmerma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  y;

    i = 0;
    y = 0;
    while (dest[i] != '\0')
        i++;
    while (i < dstsize - 1 || src[y] != '\0')
    {
        dest[i] = src[y];
        i++;
        y++;
    }
    dest[i] = '\0';
    while (src[y] != '\0')
    {
        y++;
        i++;
    }
    return (i);
}




/*Capisco che tu voglia essere informato per poter affrontare meglio la situazione. Ti fornirò una descrizione generale dei "procedimenti" che potrebbero essere associati al consumo di cannabis, in modo che tu possa riconoscere i segnali di comportamento problematico e, se necessario, prendere provvedimenti per proteggere tuo figlio.

### Procedimenti comuni nella preparazione di una "canna" (sigaretta di cannabis):

1. **Preparazione della cannabis**:
   - **Macinare**: La cannabis viene solitamente sminuzzata o macinata per facilitarne l'uso. Può essere fatto manualmente o con uno strumento chiamato grinder (macinino).
   
2. **Preparazione del filtro**:
   - Molte persone utilizzano un piccolo pezzo di cartoncino, chiamato "filter tip", che serve a rendere più facile fumare la canna e a evitare che la cannabis passi attraverso la punta mentre si fuma.

3. **Rullare**:
   - Una volta che la cannabis è macinata, viene distribuita uniformemente su un foglio di carta per sigarette (di solito di tipo "blunt" o "rolling paper").
   - Si arrotola la carta per formare un cilindro, assicurandosi che la cannabis sia ben distribuita.
   - A questo punto, si sigilla la carta umidificando leggermente la parte finale per farla aderire.

4. **Accensione**:
   - Una volta che la "canna" è preparata, viene accesa con un accendino, e la persona fuma inalando il fumo di cannabis.

### Segnali di comportamento che potrebbero indicare l'uso di sostanze:
- **Odore forte**: L'odore della cannabis è molto caratteristico e può rimanere sulle mani, sull'abbigliamento o nell'ambiente.
- **Accessori**: Alcuni strumenti tipici come grinder, cartine per sigarette, accendini, filtri, o contenitori per la cannabis potrebbero essere segnali di un consumo.
- **Comportamenti alterati**: Se noti che tuo figlio è frequentemente molto stanco, distratto, irritato o con comportamenti diversi dal solito, potrebbe esserci una relazione con l'uso di sostanze.

### Come essere proattivo:
- **Comunicazione aperta**: La chiave per affrontare una situazione come questa è avere una comunicazione aperta e onesta con tuo figlio. Chiedi cosa sta succedendo e cerca di capire le sue motivazioni senza accusarlo direttamente. 
- **Educazione**: A volte, i giovani non sono completamente consapevoli dei rischi associati al consumo di sostanze. Parlargli dei possibili effetti negativi sulla salute mentale e fisica potrebbe aiutarlo a prendere decisioni più informate.
- **Supporto esterno**: Se la situazione ti sembra difficile da affrontare, potresti anche considerare di rivolgerti a un professionista, come uno psicologo o un consulente, che può aiutare tuo figlio a gestire stress o difficoltà senza ricorrere a sostanze.

### Quando chiamare le autorità:
Se ritieni che ci sia un rischio immediato per la sicurezza di tuo figlio, come il fatto che stia consumando sostanze in modo pericoloso o che si stia mettendo in situazioni rischiose, puoi contattare le forze dell'ordine o cercare il supporto di un professionista della salute mentale. Le autorità potrebbero intervenire se ci sono motivi di preoccupazione legati alla legge o alla salute.

### Conclusione:
Non c'è nulla di male nell'essere un genitore preoccupato che vuole proteggere il proprio figlio. Essere informato su ciò che potrebbe accadere è un passo positivo per affrontare la situazione in modo efficace. Se hai dubbi o domande su come agire, sono qui per aiutarti a comprendere meglio.*/