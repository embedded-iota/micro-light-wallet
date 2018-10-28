#ifndef TEST_VECTORS_H
#define TEST_VECTORS_H

#include "iota/iota_types.h"

#define MAX_ADDRESS_INDEX 4

typedef struct TEST_VECTOR {

        char seed[NUM_HASH_TRYTES + 1];
        char addresses[MAX_SECURITY_LEVEL + 1][MAX_ADDRESS_INDEX + 1][NUM_HASH_TRYTES + 1];

        char bundle_hash[81];

        char signature[2][4374];

} TEST_VECTOR;

static const TEST_VECTOR PETER_VECTOR = {
        // for purely coincidental reasons this seed was intialy used in the development
        "PETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERPETERR", {
                { /* ignore index 0 as there is no security level 0 */},
                {"WLRSPFNMBJRWS9DFXCGIROJCZCPJQG9PMOO9CUZNQXTLLQAYXGXT9LECGEQ9MQIWIBGQREFHULPOETHNZ",
                 "UMDTJXHIFVYVCHXKZNMQWMDHNLVQNMJMRULXUFRLNFVVUMKYZOAETVQOWSDUAKTXVNDSVAJCASTRQNV9D",
                 "LHWIEGUADQXNMRKQSBDJOAFMBIFKHHZXYEFOU9WFRMBGODSNJAPGFHOUOSGDICSFVA9KOUPPCMLAHPHAW",
                 "GDTLKEWSSLKLQYF9UYSFM9XOVWZYMPMCQOCJMCYJFEESUHBAFPCLNGOLMDHZSXX9WSSFUNDORMGADKIEA",
                 "DJJTBISBQNSJTYYVRRXFQVTGHTNGOEJSVOXIJKW9NBHOZBZIUASYVI9FA9YYR9KVNQP9OLLUFGSZAZDDA"},
                {"GUIOZDLUNXIGC9DCV9ZIEDBWRHHPILAYOYRVPTFPRAUZWLWDIXBSPCZGENHWDFHMQGCTOKMXITVVDMEFB",
                 "MTPYSBLSL9HENRQKP9IPYYZTHEOECLXGYMZIYYUCYAPZYFAECX9ZSFOSFMDNYQAPYHVMTVUX9HNNUKOB9",
                 "RKPTFXPROTSKXBKXLNSLOPOQGWASCLAECQQRWOKCJPNYHIFBUJXE9GHQJPIZHKYXXHC9BZJPHAROKBGSD",
                 "JYJFIYFNTDPTPGSJWAKUFK9OLTISGIKSQPTLIVRVHLHRRCSJCEFQRTGWVTBUQFXHFRZICMFDTPDKNKDFW",
                 "WPF9CTKYVMEWXHXL9NKR9XON9TPBP9UNM9FPWBUISVSHNULLVHSU9PMBNNR9FSZUPCNBXGJWLGRKKSLHW"},
                {"GL9YTIZWBXCPSCBRAVAUBMNNCHIHZWABOYQ9NBXOMZCNCCZPQWTMRBKKJDZWUIWRUXHZVEXBCGYBMEMQX",
                 "PROKBRGUUTYILP9KB9QVTXDODVRRWHP9IITVHYCYHWRDZFLIPRVARUXWURXDTUWNPWDFGTNSLXYUTWQTW",
                 "AYVJGXBZOGIKYOCSDAMFNBZVSBKEVB9YNYD9EWONVIYPPYKWKWYXPBZSBEIZTRBZ9SDXYRIGWOERSSRDA",
                 "PDBLCSZPTJTAVBBBHOYKVHETZG9RTLUIHAIPWJ9VNYPNXLYNCTCIIECH9OJHXOSGCORBR9OJCMCUQWWUX",
                 "FDEBHWMDYRZCMJULJRUDTUCNCYMHJBYGUOTSIKQUANCY9YMYKAWKFNIWOUWOKYQLTZOIVXRITMJTNRMB9"}
        },

        "9WIOYSDBCGZNERIROVLDAJRJKFBNZHLXNXWGJXCXJJHU9GZWIJCTCRLLVGNLFQOERBZZFLYZYFQZDTCCD",

        {"WDVPPZTVCSGGLVAORJSZAILMLSINZUJUUPA9WWIC9OFBUJIIIDLSQYWK9KHBRMCTNEYSEHFJEJMZJBEFXHAUQUSL9UFTAQVPHNZXYIAEY9TFSBWQNCOPJKCYGQBINAU9SEJWGCUFOYMBGEZMGXWBGRVQQIZRHTLCSXIODLBNWDE9RWNIOYVJBPHRQAMTVZNFABTOXVGHDOCRGFDTCSNJCUTMBMBTBIBJAPUMTNUOORVOKZHSWKWUIW9PCVAAOANSCNEWFYQOOJMXNJJGJZCQGOYPRHHCZ9HEOTOTSNUZCGIBVQOBTZRUXUGC9HG9LCNLRP9AQXWEDFQLHHWIEWTG9MECPTCCCJWVSVVWDNMLTBHG9MCFTUPFHJ9WFBBPJOMJIKBNBFSSLHOD9UMVAO9FWSXPCJHKEDUTGUTXLXLIRZG9IRBEUJTTTWBTTKBHFPPRJDOJMAAPGLWWEAIBRXWHITLUAPVHQZW9WNGFRWXBIFEHJJERNIS9QXMQ9UXQECJMHAKMPDSGLLINDDIQAOQRJWMYBSNDVOTDMVFSIOADXPWYGNRLCUVUTWDWBTLMVJHSK9VFUQLWWXQJNSVSEPDWNOHNFFUKUFQBGDJLPDQVYTKDPUBMVGWGVPU99LUUYFQORROPTJX9CBAOM9YMUBPEGANCFSEUHEIIVYWYMYIIDCNGRZLPSOXATBPRIW9JAIMYYEIOUVKXILAUNGAKTWRWCS9MYRCOBIWTNWPOWDKNVLQUEWHCPMQQVBZJWQKLHBYQUNDCMFPWPB9CDDKUIIDSFDMYMUVHYZZNGOTUUAFKMBVW9HMWTSLY9MVRGWAITHZQTE9KZKAWGBOUGDGNZBXHFXY9HQXIQGXFYAUBZVBUIBIZLXLWGLXGPWUR9JCMTZYA9NLDBXSCKYEGJVGJK9KQE9AVFSBZGMOWPWTWHNYSIXRGUTWUYSGCFBTSTNVPEJOAXBFUENOTGNHCKGIKROSXJWIJN9OXLQWZESQXAZDZRIQUGYYASWHEEW9VJADFI9KMMXO9SWRETBIPFGHRUZNVYXMCBDFJWVIQKBVZONICDROJBGJE9LC9YBOYXQRQPEBVVIFUHXGXBIGGQPQCKBNUSKHRRDTZETTWOVZXGDIXKOQGOYTYHBG9JHTJ9EEEUOQOEFIAWZKJRPZBYSUBEXMFXGSWUEIBDJTFRZZZWGDFWCZFMBDBMHNWYEDPNWWBCNWPANETVLYFXHLVEW9VEXAMJNG9MQRGNC9ZVUBYWSIPXVTKWPUDMDRFCHAQBKDEUC9JRGCKTZSXIUFAXDADYWQEPIVFCCENUGUPTPCLBPMHOE9OF99QQ9AKOWX9YPEPIDFMQFJYHGUDZANRYLXDBSNSGCSQVJAFKSERBNDQGDSQVPMYCNMXFGJGEOCTIGJYSAJAGLQIIRDVVLAEVLZTTIHGPNJFDHGEWCSDWGSRDXS9PHPGYUKTCWGDRSVHBQZGLMNOXASBYORWIGJFUX9TPAQSSMBYFX9VJYRGY9CIAENTRJCMJWA9DIFBEDAGMXCEFSGB9MASXRSQBDIYRCCNKFGNIPFPDSEXHLSPERPANNZSCUQOWBEMRJI9NWPVWZHAYFBWAZUPNSKVYGLCMKSFSDGCW9LXXUCYIA9QVZDBGKHXFEZVPOAVAVNXEOZDRR9C9O9QSZHGJLHEGJQNVZNLYOMOPQGXXT9QBDF9P9KCBTN9XFXAHWAWOBP9SLTHYOSFTOZYKKWCOHBFAMOS9YARDEITFFPQQMIWZUVUTAFCDBDDWBJAMBK9LOHNTWQLNUAADTTSDJHLQBPFTAUTEPJPAQIHNKIQPJCXKIPOER9SQCEU9VMEQHAMNZDKWHTMHWTTPXPRSNUF9CCHRE9LICBJLDJESIJFV9RPOLMELJYTPLL9BLMLESQJRAJBTUJXCVHPPHVRITLNX9ZZRMTHM9TUGKSUGXO9PTRUOSNTPRFJIDNXMSMBAFJYTPBHHDVWMQLBTJJWRJDWWJHMKUNRGWHBGPLKCDZFUSOAIO9FZYWPDEDJXWZKJPERX9TEI9PEENFNQJYWMTTIZSYFTJZLCMZMDIYTEBCJOFJAKUZDKQZMQPZK9BL9RMXVOYCFYHDNFCHNGAYJDMKKQOPIRWEFJXSIELXJGECDCWDHECXZ9HWVFBKKAFHJUPUKF9MEZ9EGZHMKITJDQQOZBKJMEUDCCNETJ9OGGCTRTCJJHCDWLGDNHVRLR9IFMNZS9BHIZPRRCZIFWKCGDMTMFNPYYWBEYPVHQUCOSMBGJCDBGLZ9QYUPKRIDNBPKNUTQKGHVXJHLGI9YEMOOPNPZY9LEWZSXHFRUBVOJBRUE9JFRWNKADETPHMHAWGUT9KXHUQIQN9TPFYJFUXWUEEHZELVRRHMQYAPO9LZBSEPXJMOQYZC9TSZULXTKN9MGAINY9HWSUENNWDONMDGCKNRKNRNQEMLLSAWK9CGYELPNKOGCWFJAEQ9STPGJF9FADUDYRSMKTTMUVTXLAQDNAQZWNFRUFZXNM9WVWE9LDF9LYDQWCMCNEEUTTBWXKQHTMIQKMSDHAYERUCNRZCPNBZMGTETYYBYLPZD9ZQEGIXZWCWLTZVZDAFPUTULGGLLMOORNPPCWTVWOY9MZRXRUKBVZMJREQOJTKNBTEAJWCNPTGPGCWWPKMJFVGLSOEMEUJWWYAQCPPLRUCUMJWPQWHWVKY9TXHJ9HLJPHMNHNZONQFYAJMMKCVDFEWZKLLCCFHLJBYBWDONCLOH9POVSVAWRPGEWJOMTZFOWMRZHOZGGUKABHOVZVLWTZRTTIUCFQDYTHSEVDILVVOQBWQQZZYEYGBDYR9TIZZFE9IRDEJNYRUBAPXTFDHEVNZYVLVZ9TEUXMWNBYYOOFUCEI9AUFVBYLOWJDJWBOGDPTHUEIKSW9VTCCCYHANAGCBKXUCCRCPGDVNPMWVC9UJQU9OFHWSVQQWBSLYOMTIPBIQAJBJQTCEPACBQE9DFSFCJA9XXKLEASKCNNEWCHIKDOOWPFCMGHFJQWVZLLEFOEDGKMZQP9VL9VTSJDLGHPUTSKBOUIPIZVP9HICMOHLARYLRWRNYUKFJWDQKRTQQIPUOKBA9MRCIXUORUWEYSUWUZHGVYAJIZUNCJOESTVWEVLDXCWZNNQQITNDHZUQBNFEHDDUHRWXDENYAAWYJMXNFRJRPPGBKTHDHXYXKLFYP9RTYKKDZMRZQWZLZ9WQCILCSUNFBU9VNPAKFGJ9OPDHQSYCJAXTTJPLWL9GB9ZROLPTMAQZOLOOLVPISSOQCDAGSGYRTUYNJORAJ9AYM9MDXJPSTLXEKKKPFRXRUJHKBTUPHWHKMDUTZMDQDZILMAHVYJLBAXWDAMZBBT9VDFAYBKRVQZTMLSHCAXCLJQGDZE9QW9LQZGXGBJWLWBHWEFZJYYKSE9JJPYLJMESAQGWHCJANOEV9XVFSIISZRHHUVNJDDQN99QURZ9ZTJL9DNOBZVOYWLAPMNPWYETTXN9Q9ULKQVRYZSGXYNATKUIEMQINXPXZD9TCPRYAM9F99AFZVLIIE9Y9VQFGMROAMIPIDWIFQXTQDULMEJHRBXSLDPTZLXDEKKJDFZBTEGVSZMCNHUETBOMUUIKZTHAOL9JEI9RIKNCOFLMRUXTWQU9XOGNSVAAFZYSERUFALFINZIVBCGLYXPNCMUZEQPAL9WSHDFDRKDJISVMFSYQWLWLASOVTGYPRUZLNDCYUAYJHAFBOFQFQDNYTFLZDHD9TFKKLITUYBOKZMATPB9DIRLUYKIDXUCFRNDXK9MILALRLRDIHG9EIQQBOFIVDEGFZKKKIDVTZCYARVPHZBPJF99RHZLUORDTGXEWIDNSOKVSAHWOCGVJH9PZYMRYIAEQCMJZYFUO9BDUPOQJUYFSQ9JXRNWOFGOLPBYHIDHYQRZDMQCYCJMKHMRCEQUVKHYFRQZADRWXPEXDKGVITABYGQQOMJWN9ECKVA9VEWHTGLKCMHHEYDYXOHXHQZXLSZUFRBVTMAVRPSTUXAXQSU9LZKAOYCFVOI9N9LKDIDJOGKFNNODVEAWYPQTWPTSQZNBUJSZERWGGZDZCBFLZWVFIGBVKSVWXSBGMTURZRGFYJFLWZSJZIVNBZEYHSDRBKNYOXPMHDCSGSRCHA9DLGMKWQC9ZMVZMM9RCJZPXMLCSTELCM9MYALANFTRLZZXKH9UPXDJVCJOQVKOTYZGKUPTRFBHGZVSLJAV9JAHFLIAHXLAZH9DDPBLWRUAXXFJKRVSQSVABUJPAIRWBPOD9NNFJACUCWRYVKKUTCVMHGYWNYMSRAFXCEIITQJEIEGUEHHUYXKWQXFWQRVYG9UMRKJUEHODMKMDLBMMPTW9ZWGTJFGJNFUSBLTIQON9Y", ""}
};

static const TEST_VECTOR OVERFLOW_VECTOR = {
        "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", {
                { /* ignore index 0 as there is no security level 0 */},
                {"SDJGHWUKBMMDMLBVPARNPJZSXJLE9IVWLMXNLGBAGW9BVUWCLBZFIUWCHMUKAO9NOEBXTWLPTGNOFLUUD",
                 "EZCPFKWUFUPNNTLPOSQUF9ARBWOXTACYDEWGOHGNZWPMOBMRHYTXOYBISQASOUCUIBHEJAKVBVEVIPFNY",
                 "RGXSOSXNPSECZJZBOWSPQV9FEHAECO9PLVR9DRFCOZOUYT9OZMZOGIPIIIXARBWOHAYUDFFUFTROAUBNB",
                 "DR9TTRXS9CQVBSEATLURTEVNCZWPNFTRIHYZENBXXTHZLIOGPVMFFHCGK9POSHKE9BFAYQQN9NMKA99GC",
                 "WVCBEC9DLNWIJKIQIXWHHKYUMXOT9J9WAMZTIVLDOSKHGLVGYTAEOVOQQNSV9DLVU9ENFXGCPUGAHLIJY"},
                {"VSSIPYVZYLPSMIB9HFPIM9ONASKJHETXRMJNIBRBZNJRWIMD9WVITVUC9FZHIZHGLBKAY9HAPGIZVQOQA",
                 "MDWYEJJHJDIUVPKDY9EACGDJUOP9TLYDWETUBOYCBLYXYYYJYUXYUTCTPTDGJYFKMQMCNZDQPTBE9AFIW",
                 "BRCRVAASDLAZPTSHELUSJGNEWQSCLY9WHEARHXSJBQFNSMTES9OQULMXNNLWSZDE9K9HOWQHPMTVNHEMD",
                 "BVTCAAJ9KVBYCDXUATNBFOIOVALZZJCVEMWSWHHKBLCQ9BXRFZPN9ER9WXUROWIJVRWREWJNAWTOGH9OW",
                 "BPBX9PPTMYXBYSELTKUJVROKMFLCSQMCGKMMYMXSFPQNDWRQ9RWJBEEERFAO9ZHWGTKTWEBMCDBRUUAHC"},
                {"RBUXEKPRWLYEPINEWH9AIL9DUYRWBZHFQDNPQLXIUVTEYWTSGDIZOTWALPNIFIFJCWQDPFWPNTOFRQZHC",
                 "UDVBLCHJDIPXJZKKCNVLRLMCPHXKGZQGURCE9M9RQLWPBTSFSVFBJWSMNEUEMLHGOWS9ZXFAWFDXWEEBW",
                 "OHHNETEIFRKUUQFLKXBPQLFCFWYQ9GLJWLFWCZNWDD9WNTHNWRVUSPNGPHWVAZLWUBCZXMSPB99DEYPSD",
                 "NIKLXGWY9VY9MLVZOTENPTQFBUWOUZYTPUUBQRHQ9HGFJNUVRANV9CCOTORJPTAKP9UBQDGENB9BWIMXW",
                 "MZDWEIFYLRYNBNBZFZIIGXKIUDVDBSCPYXKJKIVKK9AUWSLZLTHGIRBFKUJQMGGTWGNPBYLNB9CUSLDKW"}
        }, "", {}
};


#endif // TEST_VECTORS_H
