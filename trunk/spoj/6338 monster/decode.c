main(){char*s="9 9 9 9 3 ,3 ,2  \n9 9 9 9 4 $,2 $,5 ,9 3  \n9 9 9 9 4 \"2s.$2s. .s'5  \n9 9 9 5 ,5 .2s9$$s,9 5  \n9 9 9 5 $. s9$5$`2$Ss7  \n9 9 9 5 \"9$9$o3$7 ,7  \n9 9 9 4 s9$9$6$s,2 ,s2  \n9 9 9 3 s9$\"6$4\"6$\"5$,5  \n9 9 9 3 s9$$s2\"4$6s\"8$\"3  \n9 9 9 2 s9$$'9 `3\"2s\"$\"$s2\"6  \n9 9 9 2 s9$$,9 5 `5\"$2 .s2$s\n9 9 9 2 s9$3$s,3.9 6 `s2$'2 `\n9 9 7 `4s9$9$2$4#s.5 .2$\"$.3 , s-\n9 9 9 `4\"9$9$2$5#6$\"5 $.$'\n9 9 9 6 \"9$9$3$4#s2\"5 .3$|\n9 9 9 7 \"9$9$6$2#s4 .2$\" $ \n9 9 9 8 2$2\"9$9$9$2$\"3 `\n9 9 9 7 2$\"2 \"$\"9$9$2$S4\"' \n9 9 9 2 ,3 ,\"5 '2 9$7$4#s2  \n9 9 9 2 $.9  .s9$8$4#\"\n9 8 ,9 2 \"$s.3 2.2sS9$9$$4#\"\n9 8 $9 2 .3$S9$9$6$5#\"\n9 8 Ss5 2.sS9$9$9$6#2\"\n9 9 \"2$sS9$9$9$8#\"\n9 2 ,6 s9$9$6$9#2\"'\n9 2 $4 s9$9$3$7#2\"'6 s'9 ,\n9 2 2$2.9$9$6#\"'7 4.,2$4.4 ,$\n9 3 \"9$6$6#\"' ,5 .sS9$7$s2$\n9 5 9$3$5#\"5 $, .s9$9$6$s.\n3 )9  9$2$5#'6 `9$9#2#9$2$.\n2 2(9  9$2$5#7 8$3#\"7 \"4#9$$ \n2 ) \\9 9$3$4#.5 6$3#\"9 4 \"3#9$3 s'\n (3 )8 9$4$4#.3 5$3#\"9 7 4#8$s2$'\n )2 ( (7 2$\"9$2$5#.5$3#'9 7 .3#9$$\"\n (2 )2 )3 _,$\"3 9$3$6#.2$2#'9 7 .3#9$$\n ) (2 ( \\.9 \"9$4$7#3,.9  2.4#9$2$\"\n(3 )$ )2 )8 ,9$9$9#9#2#9$2$\"8  \n(3 (2$2 ( \\5 _sS\"2 `\"9$9$9$9$5$S2$,7  \n )2 )3$s ) )2 .6 .3 `9$9$9$9$$\"'2 `2$3  \n2 (3 3$Ss/2 .$,4 .$2,s6$2#S9$9$6$S2\"8 ' \n4 \\)_9$9$5$2#\"2 2$8 `2$.8 `2$.\n8 `\"S9$8$#\"6 $9  `$9  `$\n9 3 `9\"4\"'9 '9 2 '9 2 '\n\n";int i,a;for(i=0;s[i];i++){if(s[i]>48&&s[i]<58){for(a=0;a<s[i]-48;a++)printf("%c",s[i+1]);i++;}else printf("%c",s[i]);}return 0;}
