cmd_sound/core/snd.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o;  true
