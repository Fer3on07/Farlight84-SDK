// Class TemplateSequence.TemplateSequence
// Size: 0x3f0 (Inherited: 0x348)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x350(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x378(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3a0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x3f0 (Inherited: 0x3f0)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x278 (Inherited: 0x228)
struct ATemplateSequenceActor : AActor {
	char pad_228[0x8]; // 0x228(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230(0x14)
	char pad_244[0x4]; // 0x244(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x248(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x250(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x268(0x0c)
	char pad_274[0x4]; // 0x274(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x1d16de0
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x1d16d50
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d16d20
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d16cf0
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d16cc0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x890 (Inherited: 0x888)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_888[0x8]; // 0x888(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1d16b40
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x158 (Inherited: 0x158)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x68 (Inherited: 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

