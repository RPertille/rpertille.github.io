---
permalink: /tools/
title: "Tools"
author_profile: true
redirect_from: 
  - /tools.md
---


### 1. DiseasePlan - a spreadsheet application for training people to assess disease severity and to assist with standard area diagram development

Sachet, Marcos Robson, Citadin, Idemir, Danner, Moeses Andrigo, Guerrezi, Marieli Teresinha, & Pertille, Rafael Henrique. (2017). DiseasePlan - a spreadsheet application for training people to assess disease severity and to assist with standard area diagram development. Ciência Rural, 47(6), e20160924. Epub May 04, 2017. <https://dx.doi.org/10.1590/0103-8478cr20160924>

Click [here](https://www.researchgate.net/publication/308948364_DiseasePlan_-_a_spreadsheet_application_for_training_people_to_assess_disease_severity_and_to_assist_with_standard_area_diagram_development_DownloadUnzip_Run_DiseasePlanxlsm) for download the DiseasePlan.


### 2. ChillModels Package - Functions for Processing Chill and Heat Models for Temperate Fruit Trees

#### R package - contains procedures for calculate the chilling and heat accumulation for studies in the temperate fruit trees. The models in this package are:
- Utah (Richardson et al., 1974)
- PCU (Utah modified by Infruitec)
- GDH_A (Growing Degree Hours by Anderson et al., 1986)
- GDH_A (Growing Degree Hours by Richardon, 1974)
- North Carolina (Shaltout e Unrath, 1983)
- Landsberg Model, Q10 Model (Bidabe)
- Model by Jones et al. (2013)
- Low-Chill Model (Gilreath and Buchanan, 1981)
- Model for Cherry "Sweetheart" (Guak and Nielsen, 2013)
- Model for apple "Gala" (Guak and Nielsen, 2013)
- Dynamic Model (Fichmann, 1987) adapted of the "chillR" package
- Unified Model of Chuine (Chuine, I. et al. 2016)

The `ChillModels` package is hosted in GitHub. You can download it from GitHub using devtools package.

```r
install.packages("devtools")
devtools::install_github("RPertille/ChillModels")
library(ChillModels)
```
