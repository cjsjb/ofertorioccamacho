\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \minor

		R1*4  |
%% 5
		e' 2. f' 4  |
		d' 1  |
		r4 e' a' e'  |
		g' 1  |
		r4 e' g' g'  |
%% 10
		a' 4 a' a' g'  |
		f' 2. f' 4  |
		g' 2. r4  |
		e' 2 e' 4 f'  |
		g' 2 e'  |
%% 15
		f' 4 f' f' 8 e' d' 4  |
		e' 1  |
		aes' 2 aes' 4 aes'  |
		bes' 2 g'  |
		f' 4 f' e' 8 d' c' 4  |
%% 20
		d' 1  |
		e' 2. f' 4  |
		d' 1  |
		r4 e' a' e'  |
		g' 1  |
%% 25
		r4 e' g' g'  |
		a' 4 a' a' g'  |
		f' 2. f' 4  |
		g' 2. r4  |
		e' 2 e' 4 f'  |
%% 30
		g' 2 e'  |
		f' 4 f' f' 8 e' d' 4  |
		e' 1  |
		aes' 2 aes' 4 aes'  |
		bes' 2 g'  |
%% 35
		f' 4 f' e' 8 d' c' 4  |
		d' 2. d' 4  |
		e' 1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
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
		de tu gra -- "cia y" tu paz.

		A -- mén.
	}
>>
