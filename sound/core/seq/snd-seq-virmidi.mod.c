#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf63809dd, "snd_rawmidi_proceed" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xa7b3181c, "up_read" },
	{ 0x56efbc6b, "snd_midi_event_reset_decode" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xc158d914, "snd_device_free" },
	{ 0x17fcf66b, "snd_midi_event_encode_byte" },
	{ 0x3b697738, "_raw_read_lock" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x3f27ffd9, "snd_seq_create_kernel_client" },
	{ 0xf6953456, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x1724fb56, "snd_midi_event_decode" },
	{ 0xd666b295, "snd_rawmidi_new" },
	{ 0xfb1d7438, "down_read" },
	{ 0xdaf3383a, "snd_midi_event_new" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x12b548f6, "module_put" },
	{ 0x4d5f7f98, "snd_midi_event_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d634803, "_raw_write_lock_irq" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x94d20e1b, "snd_rawmidi_transmit" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x76063b93, "snd_rawmidi_receive" },
	{ 0x717bcdac, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-midi-event,snd-seq,snd");


MODULE_INFO(srcversion, "778E66E20BB331CEE6ADFA8");
