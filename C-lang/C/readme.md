
## ๐ ๋ชจ๋์ ์ฝ๋, C

[แแตแธแแฅแแฅแจแแณแซ C.pdf](https://github.com/Ejaeda/C_lang/files/8502450/C.pdf)
![0001](https://user-images.githubusercontent.com/87407504/163732171-37ccbe73-d151-4e6f-97ce-84588975984b.jpg)

-----

### ์ปดํจํฐ๋ ๊ณ์ฐ๊ธฐ๋ค

- ์ปดํจํฐ๋ CPU์์ ์ฐ์ฐ์ ์ํํ๋ค

   64๋นํธ ์ด์์ฒด์ ์์  64๋นํธ๋ฅผ ๊ฐ์ง `๋ ์ง์คํฐ`๊ฐ 16๊ฐ ์๋ค
   
   ```.c
   ๋ ์ง์คํฐ
   
   CPU๊ฐ ์์ฒญ์ ์ฒ๋ฆฌํ๋ ๋ฐ ํ์ํ ๋ฐ์ดํฐ๋ฅผ ์ผ์์ ์ผ๋ก ์ ์ฅํ๋ ๊ธฐ์ต์ฅ์น
   ```
   
   - `ํ๋๋์คํฌ`์์๋ ๋ฐ์ดํฐ๋ฅผ `์๊ตฌ์ `์ผ๋ก ์ ์ฅํ๋ค
   - `๋ฉ๋ชจ๋ฆฌ(RAM)`์์๋ ๋ฐ์ดํฐ๋ฅผ`์์์ `์ผ๋ก ์ ์ฅํ๋ค
   - ๋ฉ๋ชจ๋ฆฌ๋ก ์ฐ์ฐ์ ๊ฒฐ๊ณผ๋ฅผ ๋ณด๋ด๊ณ  ์๊ตฌ ์ ์ฅ ๋ฐ์ดํฐ๋ฅผ ํ๋๋์คํฌ์ ์ ์ฅํด์ผํ๋ ๋ช๋ น์ ์ฒ๋ฆฌํ๊ธฐ์ํด ๊ธฐ์ต๊ณต๊ฐ ํ๋ ๋ ํ์ํ๋ค

      ๊ทธ๊ฒ์ด ๋ฐ๋ก `๋ ์ง์คํฐ`
      
      - CPU์์ ๋ถ์ด ์์ด์ ์ฐ์ฐ ์๋๊ฐ ๋ฉ๋ชจ๋ฆฌ๋ณด๋ค ํจ์ฌ ๋น ๋ฅด๋ค

      - CPU๋ ์์ฒด์ ์ผ๋ก ๋ฐ์ดํฐ๋ฅผ ์ ์ฅํ  ๋ฐฉ๋ฒ์ด ์์ผ๋ฏ๋ก ๋ฉ๋ชจ๋ฆฌ๋ก ์ง์  ๋ฐ์ดํฐ ์ ์ก์ด ๋ถ๊ฐํ๋ค

      - ๋๋ฌธ์ ์ฐ์ฐ์ ์ํด์๋ ๋ฐ๋์ ๋ ์ง์คํฐ๋ฅผ ๊ฑฐ์ณ์ผํ๋ฉฐ ๋ ์ง์คํฐ๋ ํน์  ์ฃผ์๋ฅผ ๊ฐ๋ฆฌํค๊ฑฐ๋ ๊ฐ์ ์ฝ์ด์ฌ ์ ์๋ค


- 32๋นํธ์ 64๋นํธ

   ์ฌ๊ธฐ์ ๋งํ๋ ๋นํธ ์๋ ๋ช๋ น์ ํ ๋ฒ์ ์ฒ๋ฆฌํ  ์ ์๋ ๋ ์ง์คํฐ์ ๋นํธ ์
   
   - ๋ ์ง์คํฐ๊ฐ ์ ์ฅ ๊ฐ๋ฅํ ๊ณต๊ฐ์ ํฌ๊ธฐ๊ฐ 32๋นํธ / 64๋นํธ ์ธ์ง๋ฅผ ๋ํ๋ธ ๊ฒ
   - 32๋นํธ ์์คํ์ด ์ธ์ ๊ฐ๋ฅํ ๋ฉ๋ชจ๋ฆฌ๊ฐ 4GB์ธ ์ด์ 

   ```.vim
   Q. 64๋นํธ ์ด์์ฒด์ ์์ 64๋นํธ๋ฅผ ๊ฐ์ง ๋ ์ง์คํฐ๊ฐ 16๊ฐ์ธ ์ด์ ๊ฐ ์๋๊ฐ?
   ```
   
   
[แแตแธแแฅแแฅแจแแณแซ C 2.pdf](https://github.com/nawooo/C_lang/files/8678654/C.2.pdf)
![์น์ด๋จน๋ C 2](https://user-images.githubusercontent.com/87407504/168067244-308ab3eb-e948-49e4-a8b3-6a52346c003f.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 3.pdf](https://github.com/nawooo/C_lang/files/8678657/C.3.pdf)
![์น์ด๋จน๋ C 3](https://user-images.githubusercontent.com/87407504/168067434-36799040-a3e2-47e5-9670-1ab865cedaec.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 4.pdf](https://github.com/nawooo/C_lang/files/8678658/C.4.pdf)
![์น์ด๋จน๋ C 4_page-0001](https://user-images.githubusercontent.com/87407504/168068297-255c0f3d-38b6-4719-9d0b-ed88d61a76cd.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 5.pdf](https://github.com/nawooo/C_lang/files/8678659/C.5.pdf)
![์น์ด๋จน๋ C 5_page-0001](https://user-images.githubusercontent.com/87407504/168068308-da9c8f9c-7dca-4975-ae7c-20d029cfbbe6.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 6.pdf](https://github.com/nawooo/C_lang/files/8678660/C.6.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 6_page-0001](https://user-images.githubusercontent.com/87407504/168068323-ed363ade-5585-4353-a926-adda62e89d31.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 7.pdf](https://github.com/nawooo/C_lang/files/8678661/C.7.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 7_page-0001](https://user-images.githubusercontent.com/87407504/168068356-0645a441-7b95-45f3-8f88-3888895c3a35.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 8.pdf](https://github.com/nawooo/C_lang/files/8678662/C.8.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 8_page-0001](https://user-images.githubusercontent.com/87407504/168068455-0a2221d2-9186-4b6d-866a-51dd4b6e8782.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 9.pdf](https://github.com/nawooo/C_lang/files/8678663/C.9.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 9_page-0001](https://user-images.githubusercontent.com/87407504/168068466-6a37f12b-214d-46fb-aaf5-79fb65c7421d.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 10.pdf](https://github.com/nawooo/C_lang/files/8678665/C.10.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 10_page-0001](https://user-images.githubusercontent.com/87407504/168069179-5f47e7d2-75e8-4fa3-9db2-3fc0b39a2111.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 11.pdf](https://github.com/nawooo/C_lang/files/8678670/C.11.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 11_page-0001](https://user-images.githubusercontent.com/87407504/168069198-e2a7fae7-b691-487a-8cbf-29a41c93c247.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 12.pdf](https://github.com/nawooo/C_lang/files/8678671/C.12.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 12_page-0001](https://user-images.githubusercontent.com/87407504/168069139-d799b959-92fc-4bc2-9e02-5bcd0238073f.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 13.pdf](https://github.com/nawooo/C_lang/files/8678673/C.13.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 13_page-0001](https://user-images.githubusercontent.com/87407504/168069153-4904f93d-6743-41ba-9041-fb945ffb5d4a.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 14.pdf](https://github.com/nawooo/C_lang/files/8678674/C.14.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 14_page-0001](https://user-images.githubusercontent.com/87407504/168069230-af00bf10-0033-4354-9c3f-2cc888855595.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 15.pdf](https://github.com/nawooo/C_lang/files/8678675/C.15.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 15_page-0001](https://user-images.githubusercontent.com/87407504/168069246-3a0319a5-9541-42f1-8fe7-813ca7d61af5.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 16.pdf](https://github.com/nawooo/C_lang/files/8678676/C.16.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 16_page-0001](https://user-images.githubusercontent.com/87407504/168069351-f6a8629b-7dd2-4b3c-b0e4-7196bd1e9d7e.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 17.pdf](https://github.com/nawooo/C_lang/files/8678677/C.17.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 17_page-0001](https://user-images.githubusercontent.com/87407504/168069376-5de35959-9803-4882-a2b4-5dd9968d7961.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 18.pdf](https://github.com/nawooo/C_lang/files/8678678/C.18.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 18_page-0001](https://user-images.githubusercontent.com/87407504/168069292-9ca740cb-06ad-41ae-b0c1-23cd2751e9ad.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 19.pdf](https://github.com/nawooo/C_lang/files/8678680/C.19.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 19_page-0001](https://user-images.githubusercontent.com/87407504/168069310-c731c3b8-0cb8-485f-8644-14109e0a3d4d.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 20.pdf](https://github.com/nawooo/C_lang/files/8678688/C.20.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 20_page-0001](https://user-images.githubusercontent.com/87407504/168069412-98173b22-7fd4-423d-8f3f-d0d13fae9680.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 21.pdf](https://github.com/nawooo/C_lang/files/8678690/C.21.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 21_page-0001](https://user-images.githubusercontent.com/87407504/168069473-5f817346-396c-446b-9027-35a316bcd1ab.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 22.pdf](https://github.com/nawooo/C_lang/files/8678691/C.22.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 22_page-0001](https://user-images.githubusercontent.com/87407504/168069508-ae362921-6349-409f-b0be-3efbfa433b96.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 23.pdf](https://github.com/nawooo/C_lang/files/8678692/C.23.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 23_page-0001](https://user-images.githubusercontent.com/87407504/168069538-1b639d35-1d6a-49d8-9bb6-0bd11c7f1561.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 24.pdf](https://github.com/nawooo/C_lang/files/8678693/C.24.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 24_page-0001](https://user-images.githubusercontent.com/87407504/168069554-cdcdacb6-499e-4041-8f14-78ff79f6fff3.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 25.pdf](https://github.com/nawooo/C_lang/files/8678696/C.25.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 25_page-0001](https://user-images.githubusercontent.com/87407504/168069573-dd4c3b6a-8ef4-4f85-8896-e1b5583d3f71.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 26.pdf](https://github.com/nawooo/C_lang/files/8678699/C.26.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 26_page-0001](https://user-images.githubusercontent.com/87407504/168069600-99bab44b-e940-4538-b131-cd77dbd9b58b.jpg)

[แแตแธแแฅแแฅแจแแณแซ C 27.pdf](https://github.com/nawooo/C_lang/files/8678700/C.27.pdf)
![แแตแธแแฅแแฅแจแแณแซ C 27_page-0001](https://user-images.githubusercontent.com/87407504/168069619-1e00f0b6-efd9-4961-9494-cb7fbc02976f.jpg)


