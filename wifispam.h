// ===== Settings ===== //
const uint8_t channels[] = {1, 6, 11}; // used Wi-Fi channels (available: 1-14)
const bool wpa2 = true; // WPA2 networks
int spamtype = 1; // 1 = funny, 2 = rickroll, maybe more later

/*
  SSIDs:
  - don't forget the \n at the end of each SSID!
  - max. 32 characters per SSID
  - don't add duplicates! You have to change one character at least
*/
char ssids[]={};
uint8_t mac[6];

#if defined(LANGUAGE_EN_US) && defined(LANGUAGE_PT_BR)
#error "Please define only one language: LANGUAGE_EN_US or LANGUAGE_PT_BR"
#endif

#if defined(LANGUAGE_EN_US)
const char funnyssids[] PROGMEM = {
  "Mom Use This One\n"
  "Abraham Linksys\n"
  "Benjamin FrankLAN\n"
  "Martin Router King\n"
  "John Wilkes Bluetooth\n"
  "Pretty Fly for a Wi-Fi\n"
  "Bill Wi the Science Fi\n"
  "I Believe Wi Can Fi\n"
  "Tell My Wi-Fi Love Her\n"
  "No More Mister Wi-Fi\n"
  "LAN Solo\n"
  "The LAN Before Time\n"
  "Silence of the LANs\n"
  "House LANister\n"
  "Winternet Is Coming\n"
  "Ping’s Landing\n"
  "The Ping in the North\n"
  "This LAN Is My LAN\n"
  "Get Off My LAN\n"
  "The Promised LAN\n"
  "The LAN Down Under\n"
  "FBI Surveillance Van 4\n"
  "Area 51 Test Site\n"
  "Drive-By Wi-Fi\n"
  "Planet Express\n"
  "Wu Tang LAN\n"
  "Darude LANstorm\n"
  "Never Gonna Give You Up\n"
  "Hide Yo Kids, Hide Yo Wi-Fi\n"
  "Loading…\n"
  "Searching…\n"
  "VIRUS.EXE\n"
  "Virus-Infected Wi-Fi\n"
  "Starbucks Wi-Fi\n"
  "Text ###-#### for Password\n"
  "Yell ____ for Password\n"
  "The Password Is 1234\n"
  "Free Public Wi-Fi\n"
  "No Free Wi-Fi Here\n"
  "Get Your Own Damn Wi-Fi\n"
  "It Hurts When IP\n"
  "Dora the Internet Explorer\n"
  "404 Wi-Fi Unavailable\n"
  "Porque-Fi\n"
  "Titanic Syncing\n"
  "Test Wi-Fi Please Ignore\n"
  "Drop It Like It’s Hotspot\n"
  "Life in the Fast LAN\n"
  "The Creep Next Door\n"
  "Ye Olde Internet\n"
};

const char rickrollssids[] PROGMEM = {
  "01 Never gonna give you up\n"
  "02 Never gonna let you down\n"
  "03 Never gonna run around\n"
  "04 and desert you\n"
  "05 Never gonna make you cry\n"
  "06 Never gonna say goodbye\n"
  "07 Never gonna tell a lie\n"
  "08 and hurt you\n"
};
#elif defined(LANGUAGE_PT_BR)
const char funnyssids[] PROGMEM = {
  "Torre Stark\n"
  "Na na ni na naum\n"
  "Ponto G\n"
  "La Casa de Papel\n"
  "Rede infectada\n"
  "Ajuda, estou preso no roteador!\n"
  "Troco senha por cerveja\n"
  "Dono da rua\n"
  "Esse condominio (complete a frase)\n"
  "Salao de Hogwarts\n"
  "O pai ta ON\n"
  "So 3 reais\n"
  "Abracadabra\n"
  "A do vizinho nao tem senha\n"
  "Volte mais tarde\n"
  "Network Unavailable\n"
  "ERRO 404"
  "Virus gratis\n"
  "Vai trabalhar e compre a sua\n"
  "cavalo_de_troia.exe\n"
  "Run, Forrest, Run\n"
  "Nao entre, cao bravo\n"
  "DeepWeb\n"
  "Winter is comming\n"
  "Nem vem que não tem\n"
  "Skynet\n"
  "Ownado\n"
  "Casa LANnister\n"
  "Familia Dinossauro\n"
  "Troco Wi-Fi por Netflix\n"
  "My Precious\n"
  "I believe Wi can Fi\n"
  "Tente a de outro vizinho\n"
  "Mother of dragons\n"
  "Passagem para Narnia\n"
  "@vizinho entrou na sala\n"
  "Lado negro da força\n"
  "Sou Eu Bola de Fogo\n"
  "ALT + F4 para conectar\n"
  "Conectou morreu\n"
  "Tente outra vez\n"
  "Virus Total\n"
  "Bruxa do 71\n"
  "A senha é 1234\n"
  "Esqueci a Senha\n"
  "Wi-Fight like a girl\n"
  "Rede Não Encontrada\n"
  "Dessa agua nao beberas\n"
  "Mundo Invertido\n"
  "So os trouxas conectam\n"
  "Rusbé\n"
  "Eles Virus\n"
  "Raccon City\n"
  "Pinga ni mim\n"
  "Cabeleleilaleila\n"
  "Sabe de nada inocente\n"
  "1 Tigre 2 Tigres 3 Tigres\n"
  "Nem veloz, nem furiosa\n"
  "Mafagafo no ninho\n"
  "Bluetooth\n"
  "Minha internet é ruim, nem tente\n"
  "Voldemodem\n"
  "use o seu 3G\n"
  "Área 51\n"
  "Do Re Mi Fa So La Wi Fi\n"
  "Stan Lee Stanley\n"
  "Sem Conexão\n"
  "Que a Força esteja com voce\n"
  "Perdeu Playboy\n"
  "LANdolf\n"
  "Wi-Fi infectado\n"
  "Winter is Here\n"
  "Templo Jedi\n"
  "Procurando rede…\n"
  "trojan.exe\n"
  "Umbrella Corporation\n"
  "TIM-FIO\n"
  "PAULA TEJANO\n"
  "Rastreador de IP\n"
  "Conexão com o além\n"
  "Mae eh essa internet\n"
  "Não cobiçarás o Wi-Fi do próximo\n"
  "A Grande Familia\n"
  "Aceito BitCoin\n"
  "Sem sinal\n"
  "Aceito pix\n"
  "Luke, WI-PAi\n"
  "MC Hackudao\n"
  "Aqui não querida\n"
  "Loading…\n"
  "virus.exe\n"
  "Familia Buscape\n"
  "Senha: trava na beleza\n"
  "Só funciona em horario comercial\n"
  "LAN Solo\n"
  "Conexão perdida\n"
  "Tela azul\n"
  "Uai Fai\n"
  "Teu pai de cueca\n"
  "A LAN da Ovelha\n"
  "Discador IG\n"
  "A WAN Prometida\n"
  "US Robotics\n"
  "Modem 14400\n"
  "Vai botar credito\n"
  "Rede de Peixe\n"
  "Lord Voldemodem\n"
  "SharkTank\n"
  "ACME\n"
  "O silencio das LANs\n"
  "Te Falta Odio\n"
  "Estamos em obra\n"
  "Ta no Hype\n"
  "Tabajara Networks\n"
  "TA COM POBREMA\n"
  "Sai Malandra\n"
  "Quer navegar compra um barco\n"
  "Soh os loucos sabem\n"
  "Se clicar explode\n"
  "Conectando…\n"
  "Voce e fraco lhe falta senha\n"
  "Expecto Patronum\n"
  "Springfield\n"
  "Missão Impossivel\n"
  "Sorveteria Ice Te Pego\n"
  "FRAMENGO PORRA\n"
  "Pick Me. Choose Me. Love me.\n"
  "ERROR\n"
  "Bazinga\n"
  "SAL SI FU FU\n"
  "Pi 3.14159265359\n"
  "56 kbps\n"
  "ET, Wi-Fi, Casa.\n"
  "Rede do Homem-Aranha\n"
  "Pergunta No Posto Ipiranga\n"
  "Ta pago\n"
  "Uai Fi Donde Ce Vai\n"
  "Love is in the AIR\n"
  "Isso é tão Black Mirror\n"
};

const char rickrollssids[] PROGMEM = {
  "Meu destino nao e de ninguem\n"
  "Eu nao deixo os meus passos no chao\n"
  "Se voce nao entende, nao ve\n"
  "Se nao me ve, não entende\n"
  "Nao procure saber onde estou\n"
  "Se o meu jeito te surpreende\n"
  "Linkin Park InTheEnd\n"
  "One thing, I don't know why\n"
  "It doesn't even matter how hard you try\n"
  "Keep that in mind, I designed this rhyme\n"
  "To remind myself how I tried so hard\n"
};
#endif

// run-time variables
char emptySSID[32];
char beaconSSID[32];
char randomName[32];
uint8_t channelIndex = 0;
uint8_t macAddr[6];
uint8_t wifi_channel = 1;
uint32_t currentTime = 0;
uint32_t packetSize = 0;
uint32_t packetCounter = 0;
uint32_t attackTime = 0;
uint32_t packetRateTime = 0;

#include <WiFi.h>

extern "C" {
#include "esp_wifi.h"
  esp_err_t esp_wifi_set_channel(uint8_t primary, wifi_second_chan_t second);
  esp_err_t esp_wifi_80211_tx(wifi_interface_t ifx, const void *buffer, int len, bool en_sys_seq);
}

const char* generateRandomName() {
  const char* charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = rand() % 10 + 1; // Generate a random length between 1 and 10
  char* randomName = (char*)malloc((len + 1) * sizeof(char)); // Allocate memory for the random name
  for (int i = 0; i < len; ++i) {
    randomName[i] = charset[rand() % strlen(charset)]; // Select random characters from the charset
  }
  randomName[len] = '\0'; // Null-terminate the string
  return randomName;
}

char* randomSSID() {
  const char* charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = rand() % 22 + 7; // Generate a random length between 1 and 10
  for (int i = 0; i < len; ++i) {
    randomName[i] = charset[rand() % strlen(charset)]; // S elect random characters from the charset
  }
  randomName[len] = '\0'; // Null-terminate the string
  return randomName;
}


uint8_t packet[128] = { 0x80, 0x00, 0x00, 0x00, //Frame Control, Duration
                /*4*/   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, //Destination address
                /*10*/  0x01, 0x02, 0x03, 0x04, 0x05, 0x06, //Source address - overwritten later
                /*16*/  0x01, 0x02, 0x03, 0x04, 0x05, 0x06, //BSSID - overwritten to the same as the source address
                /*22*/  0xc0, 0x6c, //Seq-ctl
                /*24*/  0x83, 0x51, 0xf7, 0x8f, 0x0f, 0x00, 0x00, 0x00, //timestamp - the number of microseconds the AP has been active
                /*32*/  0x64, 0x00, //Beacon interval
                /*34*/  0x01, 0x04, //Capability info
                /* SSID */
                /*36*/  0x00
                };

// beacon frame definition
uint8_t beaconPacket[109] = {
  /*  0 - 3  */ 0x80, 0x00, 0x00, 0x00, // Type/Subtype: managment beacon frame
  /*  4 - 9  */ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Destination: broadcast
  /* 10 - 15 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Source
  /* 16 - 21 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Source

  // Fixed parameters
  /* 22 - 23 */ 0x00, 0x00, // Fragment & sequence number (will be done by the SDK)
  /* 24 - 31 */ 0x83, 0x51, 0xf7, 0x8f, 0x0f, 0x00, 0x00, 0x00, // Timestamp
  /* 32 - 33 */ 0xe8, 0x03, // Interval: 0x64, 0x00 => every 100ms - 0xe8, 0x03 => every 1s
  /* 34 - 35 */ 0x31, 0x00, // capabilities Tnformation

  // Tagged parameters

  // SSID parameters
  /* 36 - 37 */ 0x00, 0x20, // Tag: Set SSID length, Tag length: 32
  /* 38 - 69 */ 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, // SSID

  // Supported Rates
  /* 70 - 71 */ 0x01, 0x08, // Tag: Supported Rates, Tag length: 8
  /* 72 */ 0x82, // 1(B)
  /* 73 */ 0x84, // 2(B)
  /* 74 */ 0x8b, // 5.5(B)
  /* 75 */ 0x96, // 11(B)
  /* 76 */ 0x24, // 18
  /* 77 */ 0x30, // 24
  /* 78 */ 0x48, // 36
  /* 79 */ 0x6c, // 54

  // Current Channel
  /* 80 - 81 */ 0x03, 0x01, // Channel set, length
  /* 82 */      0x01,       // Current Channel

  // RSN information
  /*  83 -  84 */ 0x30, 0x18,
  /*  85 -  86 */ 0x01, 0x00,
  /*  87 -  90 */ 0x00, 0x0f, 0xac, 0x02,
  /*  91 -  92 */ 0x02, 0x00,
  /*  93 - 100 */ 0x00, 0x0f, 0xac, 0x04, 0x00, 0x0f, 0xac, 0x04, /*Fix: changed 0x02(TKIP) to 0x04(CCMP) is default. WPA2 with TKIP not supported by many devices*/
  /* 101 - 102 */ 0x01, 0x00,
  /* 103 - 106 */ 0x00, 0x0f, 0xac, 0x02,
  /* 107 - 108 */ 0x00, 0x00
};

// goes to next channel
void nextChannel() {
  if (sizeof(channels) > 1) {
    uint8_t ch = channels[channelIndex];
    channelIndex++;
    if (channelIndex > sizeof(channels)) channelIndex = 0;

    if (ch != wifi_channel && ch >= 1 && ch <= 14) {
      wifi_channel = ch;
      //wifi_set_channel(wifi_channel);
      esp_wifi_set_channel(wifi_channel, WIFI_SECOND_CHAN_NONE);
    }
  }
}

void beaconSpam(const char ESSID[]){
  Serial.printf("WiFi SSID: %s\n", ESSID);
  int set_channel = random(1,12);
  esp_wifi_set_channel(set_channel, WIFI_SECOND_CHAN_NONE);
  delay(1);
  packet[10] = packet[16] = random(256);
  packet[11] = packet[17] = random(256);
  packet[12] = packet[18] = random(256);
  packet[13] = packet[19] = random(256);
  packet[14] = packet[20] = random(256);
  packet[15] = packet[21] = random(256);

  int realLen = strlen(ESSID);
  int ssidLen = random(realLen, 33);
  int numSpace = ssidLen - realLen;
  //int rand_len = sizeof(rand_reg);
  int fullLen = ssidLen;
  packet[37] = fullLen;

  for(int i = 0; i < realLen; i++)
    packet[38 + i] = ESSID[i];

  for(int i = 0; i < numSpace; i++)
    packet[38 + realLen + i] = 0x20;

  packet[50 + fullLen] = set_channel;

  esp_wifi_80211_tx(WIFI_IF_STA, packet, sizeof(packet), false);
  esp_wifi_80211_tx(WIFI_IF_STA, packet, sizeof(packet), false);
  esp_wifi_80211_tx(WIFI_IF_STA, packet, sizeof(packet), false);
}

void beaconSpamList(const char list[]){
  // Parses the char array and splits it into SSIDs
  int i = 0;
  int j = 0;
  int ssidNum = 1;
  char tmp;
  int ssidsLen = strlen_P(list);
  bool sent = false;
  while (i < ssidsLen) {
    // read out next SSID
    j = 0;
    do {
      tmp = pgm_read_byte(list + i + j);
      j++;
    } while (tmp != '\n' && j <= 32 && i + j < ssidsLen);
    uint8_t ssidLen = j - 1;
    memcpy_P(&beaconSSID, &list[i], ssidLen);
    beaconSpam(beaconSSID);
    memcpy_P(&beaconSSID, &emptySSID, 32);
    i += j;
  }
}
