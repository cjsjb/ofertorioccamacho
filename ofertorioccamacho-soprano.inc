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
		e' 2. f' 4  |
		d' 1  |
		r4 e' a' e'  |
%% 5
		d' 1  |
		r4 e' g' g'  |
		a' 4 a' a' g'  |
		f' 2. f' 4  |
		g' 2. r4  |
%% 10
		c'' 2 g' 4 c''  |
		b' 2 g'  |
		a' 4 a' a' 8 g' f' 4  |
		g' 1  |
		c'' 2 c'' 4 c''  |
%% 15
		bes' 2 g'  |
		f' 4 f' e' 8 d' c' 4  |
		d' 1  |
		e' 2. f' 4  |
		d' 1  |
%% 20
		r4 e' a' e'  |
		d' 1  |
		r4 e' g' g'  |
		a' 4 a' a' g'  |
		f' 2. f' 4  |
%% 25
		g' 2. r4  |
		c'' 2 g' 4 c''  |
		b' 2 g'  |
		a' 4 a' a' 8 g' f' 4  |
		g' 1  |
%% 30
		c'' 2 c'' 4 c''  |
		bes' 2 g'  |
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
