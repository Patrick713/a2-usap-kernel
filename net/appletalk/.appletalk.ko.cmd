cmd_net/appletalk/appletalk.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/appletalk/appletalk.ko net/appletalk/appletalk.o net/appletalk/appletalk.mod.o;  true