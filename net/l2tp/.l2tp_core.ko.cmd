cmd_net/l2tp/l2tp_core.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_core.ko net/l2tp/l2tp_core.o net/l2tp/l2tp_core.mod.o;  true
