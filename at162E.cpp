//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>    
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 10e9+7
typedef long long ll;
typedef long double ld;
using namespace std;
ll se[100001] = {9, 39, 115, 256, 523, 923, 1547, 2432, 3681, 5271, 7479, 10168, 13579, 17827, 23075, 29156, 36641, 45171, 55419, 67308, 80995, 96223, 114211, 134264, 156833, 182075, 210663, 241716, 277179, 315463, 358003, 404584, 455477, 510839, 572663, 638520, 709767, 786651, 871039, 960388, 1058269, 1161611, 1273139, 1393280, 1521327, 1655907, 1802223, 1956400, 2121217, 2295655, 2481491, 2675648, 2883575, 3102387, 3335655, 3580932, 3838789, 4106971, 4395187, 4694444, 5008079, 5338283, 5686119, 6049092, 6432801, 6829843, 7246291, 7680316, 8137283, 8609231, 9108971, 9624552, 10160625, 10720383, 11304343, 11909176, 12542827, 13195043, 13878755, 14587820, 15322053, 16076787, 16869975, 17688892, 18535495, 19410007, 20319503, 21252584, 22229729, 23235855, 24277359, 25350744, 26457211, 27595747, 28782859, 29998004, 31253105, 32548247, 33891099, 35264352, 36686547, 38140363, 39642739, 41196100, 42791537, 44421107, 46112399, 47839116, 49621227, 51448719, 53336491, 55262344, 57249181, 59282855, 61372631, 63517964, 65715447, 67962087, 70294191, 72673276, 75108109, 77598643, 80153243, 82762868, 85456787, 88198839, 91012827, 93888072, 96840157, 99843463, 102939487, 106096736, 109321247, 112627487, 116016063, 119460672, 122994309, 126585631, 130279555, 134046640, 137889263, 141801587, 145829471, 149931564, 154113513, 158383935, 162745483, 167173336, 171721339, 176337443, 181056083, 185868872, 190787433, 195790719, 200922567, 206128048, 211427059, 216819067, 222340451, 227951156, 233690165, 239508555, 245438751, 251491644, 257647783, 263887255, 270289975, 276783656, 283407509, 290148587, 297012603, 303966060, 311060511, 318275527, 325635463, 333110608, 340704473, 348394103, 356280347, 364264512, 372395259, 380649147, 389052595, 397576492, 406261345, 415064171, 424013783, 433119320, 442386915, 451763571, 461338275, 471024340, 480851437, 490848571, 501023351, 511314164, 521807531, 532419303, 543232995, 554195208, 565310329, 576566815, 588040975, 599662880, 611443811, 623395679, 635548323, 647847792, 660405381, 673096111, 685973359, 699017368, 712232999, 725611067, 739250279, 753050844, 767029509, 781184451, 795585811, 810150532, 824944015, 839886239, 855075119, 870494804, 886105905, 901871139, 917907315, 934100356, 950529667, 967192879, 984092747, 1001155016, 1018497869, 1036034631, 1053802395, 1071776568, 1089998743, 1108391803, 1127138455, 1146058868, 1165215869, 1184605907, 1204242831, 1224114528, 1244266791, 1264622323, 1285247959, 1306101412, 1327232165, 1348551419, 1370245523, 1392153588, 1414303455, 1436741007, 1459469503, 1482395632, 1505630209, 1529094023, 1552899131, 1576974644, 1601307435, 1625847207, 1650778659, 1675956448, 1701442849, 1727191159, 1753237175, 1779499736, 1806174911, 1833069867, 1860304383, 1887862812, 1915702633, 1943831419, 1972355107, 2001108428, 2030151419, 2059503011, 2089288083, 2119309476, 2149699041, 2180328307, 2211291799, 2242613284, 2274285995, 2306239799, 2338665635, 2371354512, 2404417077, 2437790703, 2471517607, 2505501472, 2539931251, 2574666059, 2609784563, 2645276720, 2681101737, 2717222871, 2753877375, 2790840880, 2828146243, 2865788827, 2903853899, 2942244956, 2981110457, 3020258091, 3059875011, 3099842628, 3140236699, 3180920311, 3222146251, 3263665472, 3305554265, 3347938427, 3390736191, 3433834788, 3477401043, 3521305543, 3565735195, 3610543288, 3655801013, 3701402183, 3747572135, 3794142072, 3841110375, 3888471387, 3936302863, 3984503116, 4033322029, 4082468963, 4132072355, 4182114056, 4232573919, 4283426811, 4334953119, 4386819460, 4439142985, 4491888547, 4545211091, 4598919596, 4653218375, 4707917043, 4763132871, 4818870276, 4875056437, 4931603131, 4988774227, 5046310028, 5104453199, 5163113555, 5222364567, 5281988700, 5342191857, 5402836219, 5464005283, 5525721844, 5587918835, 5650501751, 5713914107, 5777735172, 5842047465, 5906881719, 5972365567, 6038315752, 6104884723, 6171857027, 6239444747, 6307569848, 6376300581, 6445499655, 6515411247, 6585739480, 6656661175, 6728194795, 6800345591, 6872964356, 6946368497, 7020202803, 7094754903, 7169840004, 7245472123, 7321543543, 7398415603, 7475907512, 7553957957, 7632599099, 7711863327, 7791580740, 7872154503, 7953228367, 8035050055, 8117438824, 8200409525, 8283926135, 8368340387, 8453226672, 8538706767, 8624867931, 8711860495, 8799334660, 8887554817, 8976308915, 9065738459, 9155919116, 9246810435, 9338249727, 9430605507, 9523462312, 9617061601, 9711281071, 9806202959, 9901704632, 9998066039, 95029876, 192811096, 291230725, 390388514, 490072148, 590900132, 692258997, 794285460, 897016812, 1000531924, 1104722701, 1209750874, 1315398620, 1421804312, 1528985021, 1636981860, 1745535120, 1855163412, 1965353305, 2076354070, 2188179208, 2300790848, 2414024417, 2528143064, 2642838996, 2758572552, 2875160325, 2992569190, 3110565916, 3229574356, 3349275245, 3469721840, 3590901944, 3713080992, 3835863945, 3959808438, 4084424632, 4209886024, 4336100737, 4463088152, 4590933332, 4719918512, 4849529325, 4979926518, 5111197296, 5243513428, 5376466201, 5510595976, 5645367932, 5781112376, 5917797437, 6055296594, 6193449084, 6332843772, 6472985317, 6614100724, 6756030472, 6898930436, 7042568681, 7187242970, 7332757584, 7479369528, 7626876549, 7775240140, 7924291096, 8074782052, 8226030929, 8378150774, 8531262392, 8685419736, 8840399289, 8996549616, 9153410476, 9311308120, 9470083501, 9630039194, 9790717148, 9952635320, 115343470, 279072781, 443987365, 610011509, 776873966, 944879711, 1113631461, 1283609361, 1454508582, 1626352561, 1798954561, 1973134585, 2148205874, 2324351879, 2501505761, 2679726909, 2858724282, 3039168225, 3220498189, 3402999097, 3586586458, 3771164291, 3956668961, 4143536813, 4331285538};
template<typename _EuclideanRingElement>
    _EuclideanRingElement
    _gcd(_EuclideanRingElement __m, _EuclideanRingElement __n)
    {
      while (__n != 0)
	{
	  _EuclideanRingElement __t = __m % __n;
	  __m = __n;
	  __n = __t;
	}
      return __m;
    }

int main()
{
    fast_io();
    int n, k;
    ll ans=1;
    cin >> n >> k;
    ll cishu = k;
    for (int i = 1; i < n;i++)
        cishu *= k;
    for (ll i = 1; i <= cishu;i++)
    {
        ans *= se[n-1];
        ans %= (ll)mod;
    }
    cout << ans;
    return 0;
}