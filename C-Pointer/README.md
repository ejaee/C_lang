
## ๐ Pointer
* ๐ ๊ต์ฌ : [๊ณต๋ํ์ ์ดํ๊ฐ์ C ํฌ์ธํฐ](https://freelec.co.kr/lecture/%EC%97%B4%ED%98%88%EA%B0%95%EC%9D%98-c-%ED%8F%AC%EC%9D%B8%ED%84%B0/)
    * ํฌ์ธํฐ ์ต์ํด์ง๊ธฐ
    * ์ฝ๋ ๋ฐ๋ผํ๋ฉด์ ๋ด์ฉ [์ ๋ฆฌํ๊ธฐ](https://github.com/Ejaeda/C_lang/tree/master/Pointer)

-----

### ๐ ์์ฃผ ํท๊ฐ๋ฆฌ๋ ๊ฐ๋ ์ ๋ฆฌ

-   ๋ฌธ์์ด ์์์ ๋ฐฐ์ด์ ์ฐจ์ด์ 
    <details>
    <summary> ๋ด์ฉ ํ์ธ </summary>
    ```.c
    char *test = "abcdef";
    char test[] = "abcdef";
    ```

    "abcdef" ๋?
    > ์ปดํจํฐ๊ฐ ํ๋ก๊ทธ๋จ์ ๋ฉ๋ชจ๋ฆฌ์ ๋ก๋ํ  ๋ ์ฝ๊ธฐ ์ ์ฉ ๋ฉ๋ชจ๋ฆฌ์ ๋ก๋๋๋ ๋ฌธ์์ด ์์

    > abcdef ๊ฐ์ ์ ์ฅํ๋ ๋ฉ๋ชจ๋ฆฌ์ ์ฃผ์ (๋ฌธ์์ด์ ์ฃผ์)

    ๋ฌธ์์ด ์์ ์ฃผ์๋ฅผ `ํฌ์ธํฐ์ ๋ฃ๋๋` vs `๋ฐฐ์ด์ ๋ฃ๋๋`
    
    - ํฌ์ธํฐ์ ๋ฃ๊ธฐ
        ```.c
        char *test = "abcdef";
        ```

        ๋ฌธ์์ด์ ์ฐธ์กฐ ํ  ์๋ ์์ง๋ง ๊ฐ์ ๋ฐ๊พธ์ง ๋ชปํ๋ค
        > ๋ฌธ์์ด์ด ์ ์ฅ๋ ๋ฉ๋ชจ๋ฆฌ๊ฐ ์ฝ๊ธฐ ์ ์ฉ ๋ฉ๋ชจ๋ฆฌ์ด๊ธฐ ๋๋ฌธ

        > ์๋ณธ์ ๊ทธ๋๋ก ๊ฐ์ง์จ ๊ฒฉ
        ```.c
        test[2] = 'x'; // error
        ```

    - ๋ฐฐ์ด์ ๋ฃ๊ธฐ
        ```.c
        char test[] = "abcdef";
        ```

        ๋ฌธ์ ๋ฐฐ์ด์ ๋ฌธ์์ด ์์ ํฌ๊ธฐ๋งํผ ์คํ์ ํ ๋นํ๊ณ  ๋ด์ฉ์ ๋์ผํ๊ฒ ๋ณต์ฌ
        > ํ๋๋ ์ฝ๊ธฐ ์ ์ฉ ๋ฉ๋ชจ๋ฆฌ์, ํ๋๋ ์คํ์ ๊ฐ๊ฐ ์๋ณธ๊ณผ ์ฌ๋ณธ์ด ์กด์ฌ

        > ๊ฐ์ ๋ณ๊ฒฝํ  ์ ์์
        ```.c
        test[2] = 'x';
        ```
    </details>

-----

-   ๋ฌธ์์ด๊ณผ ๋ฐฐ์ด์ NULL
    <details>
    <summary> ๋ด์ฉ ํ์ธ </summary>

    ```.c
    char string[13] = "hello world!";
    
    |h|e|l|l|o| |w|o|r|l|d| ! |NULL|
     0 1 2 3 4 5 6 7 8 9 10 11  12
    ```
    
    ๋ฌธ์์ด์ ๋ง์ง๋ง์ ๋ฐ๋์ NULL์ ๋ฃ์ด์ผ ํ๋ค
    > ๋ฉ๋ชจ๋ฆฌ ํฌ๊ธฐ์ NULL์ ์๋ฆฌ๋ฅผ ๋ฐ๋์ ํฌํจ

    ๋ฌธ์๋ค์ ํ๋์ฉ ๋์ํ๋ ๊ฒฝ์ฐ, ๋ง์ง๋ง์ ๋ฐ๋์ ๋ ๋ฌธ์๋ฅผ ์ฑ์์ผ ํ๋ค
    > ๋๋ฌธ์๊ฐ ์๋ค๋ฉด ์ฐ๋ ๊ธฐ ๊ฐ์ ๋ฌธ์์ด๋ก ์ถ๋ ฅํ๋ค

    > `string[100]` ๋ผ๋ฉด `99๊ฐ`์ ๋ฌธ์๋ฅผ ์ ์ฅํ  ์ ์๋ค
    
    ```.c
    int arr[100] = {}
    ```
    
    ๋ฐฐ์ด์ ๊ฐ์ ํ์์ ๋ณ์๊ฐ ์ฌ๋ฌ๊ฐ ํ์ํ ๊ฒฝ์ฐ์ ์ฌ์ฉํ๋ค
    > `arr[100]` ๋ผ๋ฉด `100๊ฐ`๋ฅผ ์ ์ฅํ  ์ ์๋ค
    </details>
    
