# When NOT to use a pattern

## Singleton
Refuse when:
    Later the game need 2 audio manager, 1 for sound effects and one for music.
Instead:
    Create two AudioManager objects, plain instances, not singletons. Use AudioManager as a normal class.
Testability Cost:
    Since instance() always returns the same object, a test cannot seperately check audio effect and music, muting one would mute both since they share the same single AudioManager instance.

## Facade, refuse when:
Refuse when:
    Main only want to compress and check file size.
Instead:
    Call serializer and compressor directly, skip writer and checksum.
Testability Cost:
    SaveGameFacade::save() always run all four as one, so cannot just individually pick which one to test, must test all at once, and it will write a file as side effect.
