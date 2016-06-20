\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key a \minor

		R1*4  |
%% 5
                e 2. f 4  |
                d 1  |
                r4 e a e  |
                d 1  |
                r4 e c' c'  |
%% 10
                c' 4 c' c' c'  |
                bes 2. bes 4  |
                b 2. r4  |
                c' 2 g 4 c'  |
                b 2 g  |
%% 15
                a 4 a a 8 g f 4  |
                g 1  |
                c' 2 c' 4 c'  |
                bes 2 g  |
                aes 4 aes g 8 f e 4  |
%% 20
                g 1  |
                e 2. f 4  |
                d 1  |
                r4 e a e  |
                d 1  |
%% 25
                r4 e c' c'  |
                c' 4 c' c' c'  |
                bes 2. bes 4  |
                b 2. r4  |
                c' 2 g 4 c'  |
%% 30
                b 2 g  |
                a 4 a a 8 g f 4  |
                g 1  |
                c' 2 c' 4 c'  |
                bes 2 g  |
%% 35
                aes 4 aes g 8 f e 4  |
                g 2. g 4  |
                a 1  |
                \bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		Vi -- "no y" pan en o -- bla -- ción
		es -- pe -- ran el mi -- la -- gro del Se -- ñor.

		Ve nues -- "tra o" -- fren -- da
		so -- bre tu san -- "to al" -- tar,
		e -- "ra en" los cam -- pos
		dul -- ce vid y tri -- gal.

		Pe -- ro tú, por tu bon -- dad,
		trans -- for -- mas nues -- "tra o" -- fren -- "da en" ti, Se -- ñor

		To -- ma mi vi -- da
		y tam -- bién cam -- bia -- rá.
		Lle -- na mi al -- ma
		de tu gra -- cia y tu paz.

		Amén.
	}
>>
