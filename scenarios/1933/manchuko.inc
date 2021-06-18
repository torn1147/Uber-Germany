##############################
# Country definition for MAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1208 # Changchun
  manpower           = 8
  # Resource Reserves
  energy         = 900
  metal          = 450
  rare_materials = 225
  oil            = 200
  supplies       = 100
  money          = 10
  transports     = 100
  free = {
    energy         = 14
    metal          = 7
    rare_materials = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -100 }
    relation = { tag = U67 value = -200 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 }
  ownedprovinces         = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 }
  controlledprovinces    = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 5600 3810 1830 1840 5810 5820 5800 5080 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 235001 } # Pu-Yi
  headofgovernment       = { type = 9 id = 235002 } # Chang Ching-hui
  foreignminister        = { type = 9 id = 235003 } # Chang Ching-hui
  armamentminister       = { type = 9 id = 235004 } # Li Shao-keng
  ministerofsecurity     = { type = 9 id = 235005 } # Chin Chu-han
  ministerofintelligence = { type = 9 id = 235006 } # Kawashima Yoshiko
  chiefofstaff           = { type = 9 id = 235007 } # Chi Hsing
  chiefofarmy            = { type = 9 id = 235008 } # Chi Hsing
  chiefofnavy            = { type = 9 id = 235009 } # Sergei Ramilcheff
  chiefofair             = { type = 9 id = 235010 } # Yokoyama Masayuki

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "Di'1 Fang'tien J�ntuan"
    location = 1214
    division = {
      id             = { type = 28500 id = 2 }
      name           = "1 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 3 }
      name           = "2 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 4 }
      name           = "3 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 5 }
      name           = "4 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 6 }
      name           = "5 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 7 }
      name           = "6 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 28500 id = 8 }
    name     = "Di'2 Ji'lin J�ntuan"
    location = 1207
    division = {
      id             = { type = 28500 id = 9 }
      name           = "7 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 10 }
      name           = "8 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 11 }
      name           = "9 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 12 }
      name           = "10 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 13 }
      name           = "1 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
    division = {
      id             = { type = 28500 id = 14 }
      name           = "2 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
    division = {
      id             = { type = 28500 id = 15 }
      name           = "3 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 16 }
    name     = "Di'3 Qiqihar J�ntuan"
    location = 1203
    division = {
      id             = { type = 28500 id = 17 }
      name           = "11 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 18 }
      name           = "12 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 19 }
      name           = "13 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 20 }
      name           = "14 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 21 }
      name           = "15 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 22 }
      name           = "4 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 23 }
    name     = "Di'4 Harbin J�ntuan"
    location = 1199
    division = {
      id             = { type = 28500 id = 24 }
      name           = "16 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 25 }
      name           = "17 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 26 }
      name           = "18 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 27 }
      name           = "19 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 28 }
      name           = "20 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 29 }
      name           = "21 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 30 }
      name           = "22 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 31 }
      name           = "23 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 32 }
      name           = "5 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 33 }
    name     = "Di'5 Chengde J�ntuan"
    location = 1236
    division = {
      id             = { type = 28500 id = 34 }
      name           = "24 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 35 }
      name           = "25 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 36 }
      name           = "26 Man'chu L�"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 28500 id = 37 }
      name           = "6 Man'chu Qi'Bing"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
}