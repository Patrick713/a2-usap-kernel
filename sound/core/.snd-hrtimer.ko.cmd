cmd_sound/core/snd-hrtimer.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o sound/core/snd-hrtimer.ko sound/core/snd-hrtimer.o sound/core/snd-hrtimer.mod.o;  true