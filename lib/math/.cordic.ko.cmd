cmd_lib/math/cordic.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/math/cordic.ko lib/math/cordic.o lib/math/cordic.mod.o;  true
