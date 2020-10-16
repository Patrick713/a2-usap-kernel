cmd_net/l2tp/l2tp_ip6.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_ip6.ko net/l2tp/l2tp_ip6.o net/l2tp/l2tp_ip6.mod.o;  true
