\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
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
		d' 1  |
		r4 e' e' e'  |
%% 10
		f' 4 f' f' e'  |
		d' 2. c' 4  |
		d' 2. r4  |
		e' 2 c' 4 d'  |
		e' 2 b  |
%% 15
		c' 4 c' d' 8 c' b 4  |
		c' 1  |
		aes' 2 aes' 4 aes'  |
		g' 2 ees'  |
		des' 4 des' c' 8 bes aes 4  |
%% 20
		b 1  |
		e' 2. f' 4  |
		d' 1  |
		r4 e' a' e'  |
		d' 1  |
%% 25
		r4 e' e' e'  |
		f' 4 f' f' e'  |
		d' 2. c' 4  |
		d' 2. r4  |
		e' 2 c' 4 d'  |
%% 30
		e' 2 b  |
		c' 4 c' d' 8 c' b 4  |
		c' 1  |
		aes' 2 aes' 4 aes'  |
		g' 2 ees'  |
%% 35
		des' 4 des' c' 8 bes aes 4  |
		b 2. b 4  |
		c' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
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
