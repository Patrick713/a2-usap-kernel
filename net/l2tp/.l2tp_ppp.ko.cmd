cmd_net/l2tp/l2tp_ppp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_ppp.ko net/l2tp/l2tp_ppp.o net/l2tp/l2tp_ppp.mod.o;  true
