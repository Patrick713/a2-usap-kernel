cmd_net/sched/cls_rsvp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/cls_rsvp.ko net/sched/cls_rsvp.o net/sched/cls_rsvp.mod.o;  true
