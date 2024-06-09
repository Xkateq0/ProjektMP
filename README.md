Projekt MP
Pracujemy nad aplikacją, która dostarcza bibliotek graficznych do wyświetlania skomplikowanych
obiektów. Kluczowe jest, aby tworzone rozwiązanie było elastyczne, pozwalało na łatwe dodawanie
nowych bibliotek, oraz umożliwiało dynamiczną zmianę biblioteki dla aktualnie rysowanego obiektu.
W obecnym momencie jesteś na początku projektu, więc praca skupia się na stworzeniu szkieletów
potrzebnych klas oraz implementacją wyświetlania prostych kształtów.
Poszukiwane rozwiązanie jest przykładem odseparowania abstrakcji reprezentującej kształty od
implementacji stanowiącej sposób wyświetlania. Oba byty istnieją równolegle bez wzajemnej ingerencji
(większej niż jest to konieczne).
Dla testów wystarczy nam wyświetlanie 3 kształtów: koła, trójkąta oraz równoległoboku (ewentualnie
kształtów skomponowanych z tych 3 składowych). Na razie chcemy dostarczyć 2 sposobów
wyświetlania (bibliotek) – tekstowej oraz graficznej. Poniżej została opisana struktura klas oraz ich
publiczne metody.
