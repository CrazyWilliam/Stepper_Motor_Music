# Stepper Motor Music

## Why
Cause it is cool.

## Resources
+ [Stepper Synth](https://hackaday.io/project/173791-stepper-synth)
+ [Stepper Motor Music](https://circuitmaker.com/Projects/Details/Maria-Loida-Canada/Stepper-Motor-Music#sectionDesignFiles)
+ [Arduino MIDI Stepper Synth](https://www.hackster.io/JonJonKayne/arduino-midi-stepper-synth-d291ae)
+ [Arduino MIDI Stepper Motor Instrument](https://github.com/jzkmath/Arduino-MIDI-Stepper-Motor-Instrument)

## Main Material Required
+ [A4988 Stepper Driver](https://shopee.tw/%E3%80%90%E5%89%B5%E6%84%8F3D%E5%88%97%E5%8D%B0%E3%80%913D%E5%88%97%E5%8D%B0%E6%A9%9FA4988-DRV8825-StepStick-%E6%AD%A5%E9%80%B2%E9%9B%BB%E6%A9%9F%E9%A9%85%E5%8B%95%E5%99%A8-Reprap-i.11639520.11044780903?sp_atk=d7f2a412-0d63-48a2-9bd4-732edfc9df54&xptdk=d7f2a412-0d63-48a2-9bd4-732edfc9df54)
+ [A4988](https://shopee.tw/%E2%96%BA116%E2%97%84A4988%E6%AD%A5%E9%80%B2%E9%A6%AC%E9%81%94%E9%A9%85%E5%8B%95-%E6%AD%A5%E9%80%B2%E9%A6%AC%E9%81%94%E9%A9%85%E5%8B%95%E6%A8%A1%E7%B5%84-%E6%AD%A5%E9%80%B2%E9%A6%AC%E9%81%94-%E9%9B%BB%E6%A9%9F-%E9%A9%85%E5%8B%95%E5%99%A8-3D%E5%8D%B0%E8%A1%A8%E6%A9%9F-%E6%95%A3%E7%86%B1%E7%89%87-i.4877344.64923420?sp_atk=89c4bc30-22c0-4bb8-861c-00cbba44a3eb&xptdk=89c4bc30-22c0-4bb8-861c-00cbba44a3eb)
+ [Arduino CNC Shield](https://shopee.tw/%E2%96%BA222%E2%97%84Arduino-cnc-shield-v3-%E9%9B%95%E5%88%BB%E6%A9%9F%E6%93%B4%E5%B1%95%E6%9D%BF-3D%E5%8D%B0%E8%A1%A8%E6%A9%9F-A4988%E9%A9%85%E5%8B%95%E6%9D%BF-i.4877344.64923563?sp_atk=f9ab41da-574c-48e3-ab89-5badf9ea6394&xptdk=f9ab41da-574c-48e3-ab89-5badf9ea6394)
+ Arduino Uno
+ 12V Power Supply
+ (18650 * 4 + Charger)
+ [42 Stepper Motor (with proper wire)](https://shopee.tw/%E2%96%BA898%E2%97%843D%E5%8D%B0%E8%A1%A8%E6%A9%9F-%E5%85%A8%E6%96%B0%E5%85%A9%E7%9B%B8%E6%B7%B7%E5%90%88%E5%BC%8F-%E6%AD%A5%E9%80%B2%E9%A6%AC%E9%81%94-42%E6%AD%A5%E9%80%B2%E9%9B%BB%E6%A9%9F-NEMA17-17HS3401-i.4877344.569276582?sp_atk=010e1da3-02b6-4b05-9150-c6233e9069d3&xptdk=010e1da3-02b6-4b05-9150-c6233e9069d3)
+ [STM32F103C8T6](https://shopee.tw/%E2%96%BA291%E2%97%84%E5%8E%9F%E8%A3%9D%E6%99%B6%E7%89%87-STM32F103C8T6%E6%9C%80%E5%B0%8F%E7%B3%BB%E7%B5%B1%E6%9D%BF-%E5%96%AE%E7%89%87%E6%A9%9F-%E6%A0%B8%E5%BF%83%E6%9D%BF-STM32-ARM-Arduino-i.4877344.64927796?sp_atk=9462af4e-c764-4988-8029-1eba29dafdc1&xptdk=9462af4e-c764-4988-8029-1eba29dafdc1)

+ [Arduino CNC Shield Pack](https://shopee.tw/%E2%96%BA234%E2%97%84Arduino-CNC-shield-v3-UNO-R3-A4988(4%E5%80%8B)-Grbl-%E9%9B%B7%E5%B0%84%E9%9B%95%E5%88%BB%E6%A9%9F-3D%E5%8D%B0%E8%A1%A8%E6%A9%9F-i.4877344.64923626?sp_atk=74b52136-2af3-4c79-81ec-de0e1b487810&xptdk=74b52136-2af3-4c79-81ec-de0e1b487810)

## 材料
+ NEMA17 42步進馬達 (帶線)
+ A4988 步進馬達驅動板
+ 洞洞板
+ $100\mu F$ $25 V$電容
+ 排針、排母
+ 杜邦線
+ 共振盒(密集板)
+ Arduino Uno R3



## 採購
+ 洞洞板 * 5
+ 排針
+ 排母 (8 pin * 10)
+ 搖頭開關
+ [烙鐵](https://shopee.tw/%E2%96%BA2126%E2%97%84%E6%81%92%E6%BA%AB%E9%9B%BB%E7%83%99%E9%90%B5-%E5%B8%B6%E9%96%8B%E9%97%9C-%E5%8F%AF%E8%AA%BF%E6%BA%AB-60W-110V%E5%85%A7%E7%86%B1%E5%BC%8F-%E9%9B%BB%E5%AD%90%E7%B6%AD%E4%BF%AE%E7%84%8A%E6%8E%A5%E5%BF%85%E5%82%99-%E7%AC%AC%E4%B8%89%E4%BB%A3%E6%89%8B%E6%9F%84%E5%B8%B6%E9%96%8B%E9%97%9C-i.4877344.3974158457?sp_atk=40e768c5-046b-463c-82dd-bd9f4fc541af)
+ 線
+ DC 頭、座
+ typc C 母 Micro USB 公
+ 100 R、1k、10k、100k (各兩排)
+ 47、100、1000 電容
+ [電子零件盒]https://shopee.tw/%E2%96%BA576%E2%97%8436%E6%A0%BC-%E9%80%8F%E6%98%8E%E5%A1%91%E8%86%A0%E7%9B%92-%E9%A6%96%E9%A3%BE%E7%9B%92-%E5%84%B2%E7%89%A9%E7%9B%92-%E5%A1%91%E8%86%A0%E6%94%B6%E7%B4%8D%E7%9B%92-%E9%87%9D%E7%B7%9A%E7%9B%92-%E5%8F%AF%E6%8B%86%E5%B7%A5%E5%85%B7%E7%9B%92-%E6%95%B4%E7%90%86%E7%9B%92-i.4877344.64928005?sp_atk=aca56c09-90b0-4562-9153-8ef19fa8d0f4
+ 麵包板
+ [排針](https://shopee.tw/%E2%96%BA24%E2%97%84%E5%96%AE%E6%8E%92%E6%8E%92%E9%87%9D-180%E5%BA%A6-%E6%8E%92%E9%87%9D-1x40P-40PIN-2.54mm%E8%85%B3%E8%B7%9D-2.54mm-i.4877344.64927834?sp_atk=5eadf908-4afc-42ec-a0c6-bd86e5fd1f50)
+ 剝線鉗
+ PC817 * 10
+ DIN 




